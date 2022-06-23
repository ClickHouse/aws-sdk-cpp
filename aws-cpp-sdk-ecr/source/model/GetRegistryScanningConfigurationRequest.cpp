﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/GetRegistryScanningConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRegistryScanningConfigurationRequest::GetRegistryScanningConfigurationRequest()
{
}

Aws::String GetRegistryScanningConfigurationRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetRegistryScanningConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.GetRegistryScanningConfiguration"));
  return headers;

}




