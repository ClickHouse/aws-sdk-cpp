﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelFlow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

ChannelFlow::ChannelFlow() : 
    m_channelFlowArnHasBeenSet(false),
    m_processorsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false)
{
}

ChannelFlow::ChannelFlow(JsonView jsonValue) : 
    m_channelFlowArnHasBeenSet(false),
    m_processorsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelFlow& ChannelFlow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelFlowArn"))
  {
    m_channelFlowArn = jsonValue.GetString("ChannelFlowArn");

    m_channelFlowArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Processors"))
  {
    Array<JsonView> processorsJsonList = jsonValue.GetArray("Processors");
    for(unsigned processorsIndex = 0; processorsIndex < processorsJsonList.GetLength(); ++processorsIndex)
    {
      m_processors.push_back(processorsJsonList[processorsIndex].AsObject());
    }
    m_processorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelFlow::Jsonize() const
{
  JsonValue payload;

  if(m_channelFlowArnHasBeenSet)
  {
   payload.WithString("ChannelFlowArn", m_channelFlowArn);

  }

  if(m_processorsHasBeenSet)
  {
   Array<JsonValue> processorsJsonList(m_processors.size());
   for(unsigned processorsIndex = 0; processorsIndex < processorsJsonList.GetLength(); ++processorsIndex)
   {
     processorsJsonList[processorsIndex].AsObject(m_processors[processorsIndex].Jsonize());
   }
   payload.WithArray("Processors", std::move(processorsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
