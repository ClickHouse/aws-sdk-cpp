﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ExasolParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ExasolParameters::ExasolParameters() : 
    m_hostHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
}

ExasolParameters::ExasolParameters(JsonView jsonValue) : 
    m_hostHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
  *this = jsonValue;
}

ExasolParameters& ExasolParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  return *this;
}

JsonValue ExasolParameters::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
