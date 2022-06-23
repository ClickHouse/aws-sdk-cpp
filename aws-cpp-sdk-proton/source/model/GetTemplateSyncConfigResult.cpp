﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/GetTemplateSyncConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTemplateSyncConfigResult::GetTemplateSyncConfigResult()
{
}

GetTemplateSyncConfigResult::GetTemplateSyncConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTemplateSyncConfigResult& GetTemplateSyncConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("templateSyncConfig"))
  {
    m_templateSyncConfig = jsonValue.GetObject("templateSyncConfig");

  }



  return *this;
}
