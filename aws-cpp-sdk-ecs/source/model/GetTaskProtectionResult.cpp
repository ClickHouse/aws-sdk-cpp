﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/GetTaskProtectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTaskProtectionResult::GetTaskProtectionResult()
{
}

GetTaskProtectionResult::GetTaskProtectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTaskProtectionResult& GetTaskProtectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("protectedTasks"))
  {
    Aws::Utils::Array<JsonView> protectedTasksJsonList = jsonValue.GetArray("protectedTasks");
    for(unsigned protectedTasksIndex = 0; protectedTasksIndex < protectedTasksJsonList.GetLength(); ++protectedTasksIndex)
    {
      m_protectedTasks.push_back(protectedTasksJsonList[protectedTasksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failures"))
  {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
    {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
  }



  return *this;
}
