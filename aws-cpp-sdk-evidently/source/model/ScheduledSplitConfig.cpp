﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ScheduledSplitConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

ScheduledSplitConfig::ScheduledSplitConfig() : 
    m_groupWeightsHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

ScheduledSplitConfig::ScheduledSplitConfig(JsonView jsonValue) : 
    m_groupWeightsHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledSplitConfig& ScheduledSplitConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupWeights"))
  {
    Aws::Map<Aws::String, JsonView> groupWeightsJsonMap = jsonValue.GetObject("groupWeights").GetAllObjects();
    for(auto& groupWeightsItem : groupWeightsJsonMap)
    {
      m_groupWeights[groupWeightsItem.first] = groupWeightsItem.second.AsInt64();
    }
    m_groupWeightsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledSplitConfig::Jsonize() const
{
  JsonValue payload;

  if(m_groupWeightsHasBeenSet)
  {
   JsonValue groupWeightsJsonMap;
   for(auto& groupWeightsItem : m_groupWeights)
   {
     groupWeightsJsonMap.WithInt64(groupWeightsItem.first, groupWeightsItem.second);
   }
   payload.WithObject("groupWeights", std::move(groupWeightsJsonMap));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
