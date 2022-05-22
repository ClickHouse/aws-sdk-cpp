/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/HttpRequest.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/http/request_response.h>
#include <aws/crt/Types.h>
#include <aws/crt/http/HttpRequestResponse.h>
namespace Aws
{
    namespace Http
    {

        const char DATE_HEADER[] = "date";
        const char AWS_DATE_HEADER[] = "X-Amz-Date";
        const char AWS_SECURITY_TOKEN[] = "X-Amz-Security-Token";
        const char ACCEPT_HEADER[] = "accept";
        const char ACCEPT_CHAR_SET_HEADER[] = "accept-charset";
        const char ACCEPT_ENCODING_HEADER[] = "accept-encoding";
        const char AUTHORIZATION_HEADER[] = "authorization";
        const char AWS_AUTHORIZATION_HEADER[] = "authorization";
        const char COOKIE_HEADER[] = "cookie";
        const char DECODED_CONTENT_LENGTH_HEADER[] = "x-amz-decoded-content-length";
        const char CONTENT_LENGTH_HEADER[] = "content-length";
        const char CONTENT_TYPE_HEADER[] = "content-type";
        const char CONTENT_ENCODING_HEADER[] = "content-encoding";
        const char TRANSFER_ENCODING_HEADER[] = "transfer-encoding";
        const char USER_AGENT_HEADER[] = "user-agent";
        const char VIA_HEADER[] = "via";
        const char HOST_HEADER[] = "host";
        const char AMZ_TARGET_HEADER[] = "x-amz-target";
        const char X_AMZ_EXPIRES_HEADER[] = "X-Amz-Expires";
        const char CONTENT_MD5_HEADER[] = "content-md5";
        const char API_VERSION_HEADER[] = "x-amz-api-version";
        const char AWS_TRAILER_HEADER[] = "x-amz-trailer";
        const char SDK_INVOCATION_ID_HEADER[] = "amz-sdk-invocation-id";
        const char SDK_REQUEST_HEADER[] = "amz-sdk-request";
        const char CHUNKED_VALUE[] = "chunked";
        const char AWS_CHUNKED_VALUE[] = "aws-chunked";

        std::shared_ptr<Aws::Crt::Http::HttpRequest> HttpRequest::ToCrtHttpRequest()
        {
            auto request = Aws::MakeShared<Aws::Crt::Http::HttpRequest>("HttpRequestConversion");
            request->SetBody(GetContentBody());
            auto headers = GetHeaders();
            for (const auto& it: headers)
            {
                Aws::Crt::Http::HttpHeader header;
                header.name = Aws::Crt::ByteCursorFromCString(it.first.c_str());
                header.value = Aws::Crt::ByteCursorFromCString(it.second.c_str());
                request->AddHeader(header);
            }

            // Need a different URL encoding here.
            // CRT sigv4 don't any encoding if double encoding is off, need to encode the path before passing to CRT.
            const URI& uri = m_uri;
            Aws::StringStream ss;
            Aws::StringStream port;
            if (uri.GetScheme() == Scheme::HTTP && uri.GetPort() != HTTP_DEFAULT_PORT)
            {
                port << ":" << uri.GetPort();
            }
            else if (uri.GetScheme() == Scheme::HTTPS && uri.GetPort() != HTTPS_DEFAULT_PORT)
            {
                port << ":" << uri.GetPort();
            }

            ss << SchemeMapper::ToString(uri.GetScheme()) << SEPARATOR << uri.GetAuthority() << port.str()
                << ((uri.GetPath() == "/") ? "" : URI::URLEncodePath(uri.GetPath()))
                << uri.GetQueryString();

            request->SetPath(Aws::Crt::ByteCursorFromCString(ss.str().c_str()));
            const char *method = HttpMethodMapper::GetNameForHttpMethod(m_method);
            request->SetMethod(Aws::Crt::ByteCursorFromCString(method));
            return request;
        }

    } // Http
} // Aws
