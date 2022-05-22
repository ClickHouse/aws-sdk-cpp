﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/DeleteRecommendationPreferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteRecommendationPreferencesResult::DeleteRecommendationPreferencesResult()
{
}

DeleteRecommendationPreferencesResult::DeleteRecommendationPreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteRecommendationPreferencesResult& DeleteRecommendationPreferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);


  return *this;
}
