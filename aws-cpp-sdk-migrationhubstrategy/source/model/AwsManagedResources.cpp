﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AwsManagedResources.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

AwsManagedResources::AwsManagedResources() : 
    m_targetDestinationHasBeenSet(false)
{
}

AwsManagedResources::AwsManagedResources(JsonView jsonValue) : 
    m_targetDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

AwsManagedResources& AwsManagedResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetDestination"))
  {
    Array<JsonView> targetDestinationJsonList = jsonValue.GetArray("targetDestination");
    for(unsigned targetDestinationIndex = 0; targetDestinationIndex < targetDestinationJsonList.GetLength(); ++targetDestinationIndex)
    {
      m_targetDestination.push_back(AwsManagedTargetDestinationMapper::GetAwsManagedTargetDestinationForName(targetDestinationJsonList[targetDestinationIndex].AsString()));
    }
    m_targetDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsManagedResources::Jsonize() const
{
  JsonValue payload;

  if(m_targetDestinationHasBeenSet)
  {
   Array<JsonValue> targetDestinationJsonList(m_targetDestination.size());
   for(unsigned targetDestinationIndex = 0; targetDestinationIndex < targetDestinationJsonList.GetLength(); ++targetDestinationIndex)
   {
     targetDestinationJsonList[targetDestinationIndex].AsString(AwsManagedTargetDestinationMapper::GetNameForAwsManagedTargetDestination(m_targetDestination[targetDestinationIndex]));
   }
   payload.WithArray("targetDestination", std::move(targetDestinationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
