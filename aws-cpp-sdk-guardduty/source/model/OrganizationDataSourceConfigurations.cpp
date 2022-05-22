﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrganizationDataSourceConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

OrganizationDataSourceConfigurations::OrganizationDataSourceConfigurations() : 
    m_s3LogsHasBeenSet(false),
    m_kubernetesHasBeenSet(false)
{
}

OrganizationDataSourceConfigurations::OrganizationDataSourceConfigurations(JsonView jsonValue) : 
    m_s3LogsHasBeenSet(false),
    m_kubernetesHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationDataSourceConfigurations& OrganizationDataSourceConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Logs"))
  {
    m_s3Logs = jsonValue.GetObject("s3Logs");

    m_s3LogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kubernetes"))
  {
    m_kubernetes = jsonValue.GetObject("kubernetes");

    m_kubernetesHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationDataSourceConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_s3LogsHasBeenSet)
  {
   payload.WithObject("s3Logs", m_s3Logs.Jsonize());

  }

  if(m_kubernetesHasBeenSet)
  {
   payload.WithObject("kubernetes", m_kubernetes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
