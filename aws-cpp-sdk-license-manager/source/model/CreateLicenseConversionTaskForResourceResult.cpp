﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CreateLicenseConversionTaskForResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateLicenseConversionTaskForResourceResult::CreateLicenseConversionTaskForResourceResult()
{
}

CreateLicenseConversionTaskForResourceResult::CreateLicenseConversionTaskForResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateLicenseConversionTaskForResourceResult& CreateLicenseConversionTaskForResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseConversionTaskId"))
  {
    m_licenseConversionTaskId = jsonValue.GetString("LicenseConversionTaskId");

  }



  return *this;
}
