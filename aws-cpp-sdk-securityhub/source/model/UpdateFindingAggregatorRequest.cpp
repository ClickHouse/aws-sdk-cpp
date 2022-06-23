﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UpdateFindingAggregatorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFindingAggregatorRequest::UpdateFindingAggregatorRequest() : 
    m_findingAggregatorArnHasBeenSet(false),
    m_regionLinkingModeHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
}

Aws::String UpdateFindingAggregatorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingAggregatorArnHasBeenSet)
  {
   payload.WithString("FindingAggregatorArn", m_findingAggregatorArn);

  }

  if(m_regionLinkingModeHasBeenSet)
  {
   payload.WithString("RegionLinkingMode", m_regionLinkingMode);

  }

  if(m_regionsHasBeenSet)
  {
   Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("Regions", std::move(regionsJsonList));

  }

  return payload.View().WriteReadable();
}




