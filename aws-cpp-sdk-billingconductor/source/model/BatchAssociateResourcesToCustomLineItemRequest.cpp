﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/BatchAssociateResourcesToCustomLineItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchAssociateResourcesToCustomLineItemRequest::BatchAssociateResourcesToCustomLineItemRequest() : 
    m_targetArnHasBeenSet(false),
    m_resourceArnsHasBeenSet(false),
    m_billingPeriodRangeHasBeenSet(false)
{
}

Aws::String BatchAssociateResourcesToCustomLineItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("TargetArn", m_targetArn);

  }

  if(m_resourceArnsHasBeenSet)
  {
   Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
   for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
   {
     resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
   }
   payload.WithArray("ResourceArns", std::move(resourceArnsJsonList));

  }

  if(m_billingPeriodRangeHasBeenSet)
  {
   payload.WithObject("BillingPeriodRange", m_billingPeriodRange.Jsonize());

  }

  return payload.View().WriteReadable();
}




