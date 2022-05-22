﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace AppConfigData
{
namespace AppConfigDataEndpoint
{
AWS_APPCONFIGDATA_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace AppConfigDataEndpoint
} // namespace AppConfigData
} // namespace Aws
