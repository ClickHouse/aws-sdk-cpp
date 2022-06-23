﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/CreateSafetyRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSafetyRuleResult::CreateSafetyRuleResult()
{
}

CreateSafetyRuleResult::CreateSafetyRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSafetyRuleResult& CreateSafetyRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AssertionRule"))
  {
    m_assertionRule = jsonValue.GetObject("AssertionRule");

  }

  if(jsonValue.ValueExists("GatingRule"))
  {
    m_gatingRule = jsonValue.GetObject("GatingRule");

  }



  return *this;
}
