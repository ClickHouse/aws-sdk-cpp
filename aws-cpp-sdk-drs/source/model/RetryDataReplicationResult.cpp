﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RetryDataReplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RetryDataReplicationResult::RetryDataReplicationResult() : 
    m_lastLaunchResult(LastLaunchResult::NOT_SET)
{
}

RetryDataReplicationResult::RetryDataReplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lastLaunchResult(LastLaunchResult::NOT_SET)
{
  *this = result;
}

RetryDataReplicationResult& RetryDataReplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("dataReplicationInfo"))
  {
    m_dataReplicationInfo = jsonValue.GetObject("dataReplicationInfo");

  }

  if(jsonValue.ValueExists("lastLaunchResult"))
  {
    m_lastLaunchResult = LastLaunchResultMapper::GetLastLaunchResultForName(jsonValue.GetString("lastLaunchResult"));

  }

  if(jsonValue.ValueExists("lifeCycle"))
  {
    m_lifeCycle = jsonValue.GetObject("lifeCycle");

  }

  if(jsonValue.ValueExists("recoveryInstanceId"))
  {
    m_recoveryInstanceId = jsonValue.GetString("recoveryInstanceId");

  }

  if(jsonValue.ValueExists("sourceProperties"))
  {
    m_sourceProperties = jsonValue.GetObject("sourceProperties");

  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
