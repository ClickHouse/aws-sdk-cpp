﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/DescribeAppInstanceUserEndpointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAppInstanceUserEndpointResult::DescribeAppInstanceUserEndpointResult()
{
}

DescribeAppInstanceUserEndpointResult::DescribeAppInstanceUserEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAppInstanceUserEndpointResult& DescribeAppInstanceUserEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppInstanceUserEndpoint"))
  {
    m_appInstanceUserEndpoint = jsonValue.GetObject("AppInstanceUserEndpoint");

  }



  return *this;
}
