﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/GetIncidentRecordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetIncidentRecordRequest::GetIncidentRecordRequest() : 
    m_arnHasBeenSet(false)
{
}

Aws::String GetIncidentRecordRequest::SerializePayload() const
{
  return {};
}

void GetIncidentRecordRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_arnHasBeenSet)
    {
      ss << m_arn;
      uri.AddQueryStringParameter("arn", ss.str());
      ss.str("");
    }

}



