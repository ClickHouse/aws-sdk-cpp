﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/ListExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SnowDeviceManagement::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListExecutionsRequest::ListExecutionsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_state(ExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

Aws::String ListExecutionsRequest::SerializePayload() const
{
  return {};
}

void ListExecutionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_stateHasBeenSet)
    {
      ss << ExecutionStateMapper::GetNameForExecutionState(m_state);
      uri.AddQueryStringParameter("state", ss.str());
      ss.str("");
    }

    if(m_taskIdHasBeenSet)
    {
      ss << m_taskId;
      uri.AddQueryStringParameter("taskId", ss.str());
      ss.str("");
    }

}



