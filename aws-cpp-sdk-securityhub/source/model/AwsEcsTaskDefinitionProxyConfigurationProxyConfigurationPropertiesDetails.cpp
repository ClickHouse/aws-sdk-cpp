﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails::AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails() : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails::AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails& AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
