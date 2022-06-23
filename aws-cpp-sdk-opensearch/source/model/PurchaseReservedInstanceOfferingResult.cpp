﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PurchaseReservedInstanceOfferingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PurchaseReservedInstanceOfferingResult::PurchaseReservedInstanceOfferingResult()
{
}

PurchaseReservedInstanceOfferingResult::PurchaseReservedInstanceOfferingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PurchaseReservedInstanceOfferingResult& PurchaseReservedInstanceOfferingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReservedInstanceId"))
  {
    m_reservedInstanceId = jsonValue.GetString("ReservedInstanceId");

  }

  if(jsonValue.ValueExists("ReservationName"))
  {
    m_reservationName = jsonValue.GetString("ReservationName");

  }



  return *this;
}
