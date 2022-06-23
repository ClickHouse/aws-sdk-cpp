﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class ImageLayerSortBy
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    ALL
  };

namespace ImageLayerSortByMapper
{
AWS_INSPECTOR2_API ImageLayerSortBy GetImageLayerSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForImageLayerSortBy(ImageLayerSortBy value);
} // namespace ImageLayerSortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
