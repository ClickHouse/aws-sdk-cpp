﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/DeleteAssistantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAssistantRequest::DeleteAssistantRequest() : 
    m_assistantIdHasBeenSet(false)
{
}

Aws::String DeleteAssistantRequest::SerializePayload() const
{
  return {};
}




