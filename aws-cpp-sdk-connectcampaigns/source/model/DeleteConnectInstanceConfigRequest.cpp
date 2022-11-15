﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/DeleteConnectInstanceConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteConnectInstanceConfigRequest::DeleteConnectInstanceConfigRequest() : 
    m_connectInstanceIdHasBeenSet(false)
{
}

Aws::String DeleteConnectInstanceConfigRequest::SerializePayload() const
{
  return {};
}




