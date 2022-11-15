﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class ProfileType
  {
    NOT_SET,
    LOCAL,
    PARTNER
  };

namespace ProfileTypeMapper
{
AWS_TRANSFER_API ProfileType GetProfileTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForProfileType(ProfileType value);
} // namespace ProfileTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
