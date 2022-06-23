﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class IpamOverlapStatus
  {
    NOT_SET,
    overlapping,
    nonoverlapping,
    ignored
  };

namespace IpamOverlapStatusMapper
{
AWS_EC2_API IpamOverlapStatus GetIpamOverlapStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamOverlapStatus(IpamOverlapStatus value);
} // namespace IpamOverlapStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
