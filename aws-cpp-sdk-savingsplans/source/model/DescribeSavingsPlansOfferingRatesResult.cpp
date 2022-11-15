﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/DescribeSavingsPlansOfferingRatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SavingsPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSavingsPlansOfferingRatesResult::DescribeSavingsPlansOfferingRatesResult()
{
}

DescribeSavingsPlansOfferingRatesResult::DescribeSavingsPlansOfferingRatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSavingsPlansOfferingRatesResult& DescribeSavingsPlansOfferingRatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("searchResults"))
  {
    Aws::Utils::Array<JsonView> searchResultsJsonList = jsonValue.GetArray("searchResults");
    for(unsigned searchResultsIndex = 0; searchResultsIndex < searchResultsJsonList.GetLength(); ++searchResultsIndex)
    {
      m_searchResults.push_back(searchResultsJsonList[searchResultsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
