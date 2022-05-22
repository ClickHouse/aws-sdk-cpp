﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/UpdateSiteAddressResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSiteAddressResult::UpdateSiteAddressResult() : 
    m_addressType(AddressType::NOT_SET)
{
}

UpdateSiteAddressResult::UpdateSiteAddressResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_addressType(AddressType::NOT_SET)
{
  *this = result;
}

UpdateSiteAddressResult& UpdateSiteAddressResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AddressType"))
  {
    m_addressType = AddressTypeMapper::GetAddressTypeForName(jsonValue.GetString("AddressType"));

  }

  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetObject("Address");

  }



  return *this;
}
