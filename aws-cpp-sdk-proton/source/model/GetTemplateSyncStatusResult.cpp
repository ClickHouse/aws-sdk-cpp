﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/GetTemplateSyncStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTemplateSyncStatusResult::GetTemplateSyncStatusResult()
{
}

GetTemplateSyncStatusResult::GetTemplateSyncStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTemplateSyncStatusResult& GetTemplateSyncStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("desiredState"))
  {
    m_desiredState = jsonValue.GetObject("desiredState");

  }

  if(jsonValue.ValueExists("latestSuccessfulSync"))
  {
    m_latestSuccessfulSync = jsonValue.GetObject("latestSuccessfulSync");

  }

  if(jsonValue.ValueExists("latestSync"))
  {
    m_latestSync = jsonValue.GetObject("latestSync");

  }



  return *this;
}
