﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PutKeywordResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutKeywordResult::PutKeywordResult() : 
    m_keywordAction(KeywordAction::NOT_SET)
{
}

PutKeywordResult::PutKeywordResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_keywordAction(KeywordAction::NOT_SET)
{
  *this = result;
}

PutKeywordResult& PutKeywordResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OriginationIdentityArn"))
  {
    m_originationIdentityArn = jsonValue.GetString("OriginationIdentityArn");

  }

  if(jsonValue.ValueExists("OriginationIdentity"))
  {
    m_originationIdentity = jsonValue.GetString("OriginationIdentity");

  }

  if(jsonValue.ValueExists("Keyword"))
  {
    m_keyword = jsonValue.GetString("Keyword");

  }

  if(jsonValue.ValueExists("KeywordMessage"))
  {
    m_keywordMessage = jsonValue.GetString("KeywordMessage");

  }

  if(jsonValue.ValueExists("KeywordAction"))
  {
    m_keywordAction = KeywordActionMapper::GetKeywordActionForName(jsonValue.GetString("KeywordAction"));

  }



  return *this;
}
