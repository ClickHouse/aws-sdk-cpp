﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceFleetConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

InstanceFleetConfig::InstanceFleetConfig() : 
    m_nameHasBeenSet(false),
    m_instanceFleetType(InstanceFleetType::NOT_SET),
    m_instanceFleetTypeHasBeenSet(false),
    m_targetOnDemandCapacity(0),
    m_targetOnDemandCapacityHasBeenSet(false),
    m_targetSpotCapacity(0),
    m_targetSpotCapacityHasBeenSet(false),
    m_instanceTypeConfigsHasBeenSet(false),
    m_launchSpecificationsHasBeenSet(false)
{
}

InstanceFleetConfig::InstanceFleetConfig(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_instanceFleetType(InstanceFleetType::NOT_SET),
    m_instanceFleetTypeHasBeenSet(false),
    m_targetOnDemandCapacity(0),
    m_targetOnDemandCapacityHasBeenSet(false),
    m_targetSpotCapacity(0),
    m_targetSpotCapacityHasBeenSet(false),
    m_instanceTypeConfigsHasBeenSet(false),
    m_launchSpecificationsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceFleetConfig& InstanceFleetConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceFleetType"))
  {
    m_instanceFleetType = InstanceFleetTypeMapper::GetInstanceFleetTypeForName(jsonValue.GetString("InstanceFleetType"));

    m_instanceFleetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetOnDemandCapacity"))
  {
    m_targetOnDemandCapacity = jsonValue.GetInteger("TargetOnDemandCapacity");

    m_targetOnDemandCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetSpotCapacity"))
  {
    m_targetSpotCapacity = jsonValue.GetInteger("TargetSpotCapacity");

    m_targetSpotCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceTypeConfigs"))
  {
    Aws::Utils::Array<JsonView> instanceTypeConfigsJsonList = jsonValue.GetArray("InstanceTypeConfigs");
    for(unsigned instanceTypeConfigsIndex = 0; instanceTypeConfigsIndex < instanceTypeConfigsJsonList.GetLength(); ++instanceTypeConfigsIndex)
    {
      m_instanceTypeConfigs.push_back(instanceTypeConfigsJsonList[instanceTypeConfigsIndex].AsObject());
    }
    m_instanceTypeConfigsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchSpecifications"))
  {
    m_launchSpecifications = jsonValue.GetObject("LaunchSpecifications");

    m_launchSpecificationsHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceFleetConfig::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_instanceFleetTypeHasBeenSet)
  {
   payload.WithString("InstanceFleetType", InstanceFleetTypeMapper::GetNameForInstanceFleetType(m_instanceFleetType));
  }

  if(m_targetOnDemandCapacityHasBeenSet)
  {
   payload.WithInteger("TargetOnDemandCapacity", m_targetOnDemandCapacity);

  }

  if(m_targetSpotCapacityHasBeenSet)
  {
   payload.WithInteger("TargetSpotCapacity", m_targetSpotCapacity);

  }

  if(m_instanceTypeConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceTypeConfigsJsonList(m_instanceTypeConfigs.size());
   for(unsigned instanceTypeConfigsIndex = 0; instanceTypeConfigsIndex < instanceTypeConfigsJsonList.GetLength(); ++instanceTypeConfigsIndex)
   {
     instanceTypeConfigsJsonList[instanceTypeConfigsIndex].AsObject(m_instanceTypeConfigs[instanceTypeConfigsIndex].Jsonize());
   }
   payload.WithArray("InstanceTypeConfigs", std::move(instanceTypeConfigsJsonList));

  }

  if(m_launchSpecificationsHasBeenSet)
  {
   payload.WithObject("LaunchSpecifications", m_launchSpecifications.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
