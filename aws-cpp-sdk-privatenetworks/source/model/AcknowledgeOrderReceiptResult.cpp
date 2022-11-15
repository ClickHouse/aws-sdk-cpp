﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/AcknowledgeOrderReceiptResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AcknowledgeOrderReceiptResult::AcknowledgeOrderReceiptResult()
{
}

AcknowledgeOrderReceiptResult::AcknowledgeOrderReceiptResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AcknowledgeOrderReceiptResult& AcknowledgeOrderReceiptResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("order"))
  {
    m_order = jsonValue.GetObject("order");

  }



  return *this;
}
