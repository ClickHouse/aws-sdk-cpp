﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/UpdateGeofenceCollectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateGeofenceCollectionResult::UpdateGeofenceCollectionResult()
{
}

UpdateGeofenceCollectionResult::UpdateGeofenceCollectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateGeofenceCollectionResult& UpdateGeofenceCollectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CollectionArn"))
  {
    m_collectionArn = jsonValue.GetString("CollectionArn");

  }

  if(jsonValue.ValueExists("CollectionName"))
  {
    m_collectionName = jsonValue.GetString("CollectionName");

  }

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetString("UpdateTime");

  }



  return *this;
}
