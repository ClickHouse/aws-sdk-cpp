﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelFlowCallbackResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ChannelFlowCallbackResult::ChannelFlowCallbackResult()
{
}

ChannelFlowCallbackResult::ChannelFlowCallbackResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ChannelFlowCallbackResult& ChannelFlowCallbackResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelArn"))
  {
    m_channelArn = jsonValue.GetString("ChannelArn");

  }

  if(jsonValue.ValueExists("CallbackId"))
  {
    m_callbackId = jsonValue.GetString("CallbackId");

  }



  return *this;
}
