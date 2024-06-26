﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/ListDestinationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDestinationsRequest::ListDestinationsRequest() : 
    m_siteHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_state(DestinationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Aws::String ListDestinationsRequest::SerializePayload() const
{
  return {};
}

void ListDestinationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_siteHasBeenSet)
    {
      ss << m_site;
      uri.AddQueryStringParameter("site", ss.str());
      ss.str("");
    }

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
      ss << DestinationStateMapper::GetNameForDestinationState(m_state);
      uri.AddQueryStringParameter("state", ss.str());
      ss.str("");
    }

}



