﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/GetIdentityProviderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIdentityProviderResult::GetIdentityProviderResult()
{
}

GetIdentityProviderResult::GetIdentityProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetIdentityProviderResult& GetIdentityProviderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("identityProvider"))
  {
    m_identityProvider = jsonValue.GetObject("identityProvider");

  }



  return *this;
}
