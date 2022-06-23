﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteVoiceMessageSpendLimitOverrideResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteVoiceMessageSpendLimitOverrideResult::DeleteVoiceMessageSpendLimitOverrideResult() : 
    m_monthlyLimit(0)
{
}

DeleteVoiceMessageSpendLimitOverrideResult::DeleteVoiceMessageSpendLimitOverrideResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_monthlyLimit(0)
{
  *this = result;
}

DeleteVoiceMessageSpendLimitOverrideResult& DeleteVoiceMessageSpendLimitOverrideResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MonthlyLimit"))
  {
    m_monthlyLimit = jsonValue.GetInt64("MonthlyLimit");

  }



  return *this;
}
