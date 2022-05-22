﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/GetRepositorySyncStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRepositorySyncStatusResult::GetRepositorySyncStatusResult()
{
}

GetRepositorySyncStatusResult::GetRepositorySyncStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRepositorySyncStatusResult& GetRepositorySyncStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("latestSync"))
  {
    m_latestSync = jsonValue.GetObject("latestSync");

  }



  return *this;
}
