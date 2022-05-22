﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace SSMIncidents
{
namespace SSMIncidentsEndpoint
{
AWS_SSMINCIDENTS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace SSMIncidentsEndpoint
} // namespace SSMIncidents
} // namespace Aws
