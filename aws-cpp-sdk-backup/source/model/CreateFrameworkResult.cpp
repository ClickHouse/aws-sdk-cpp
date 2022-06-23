﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateFrameworkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateFrameworkResult::CreateFrameworkResult()
{
}

CreateFrameworkResult::CreateFrameworkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateFrameworkResult& CreateFrameworkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FrameworkName"))
  {
    m_frameworkName = jsonValue.GetString("FrameworkName");

  }

  if(jsonValue.ValueExists("FrameworkArn"))
  {
    m_frameworkArn = jsonValue.GetString("FrameworkArn");

  }



  return *this;
}
