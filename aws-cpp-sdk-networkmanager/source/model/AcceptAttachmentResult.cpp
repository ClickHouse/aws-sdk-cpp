﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/AcceptAttachmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AcceptAttachmentResult::AcceptAttachmentResult()
{
}

AcceptAttachmentResult::AcceptAttachmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AcceptAttachmentResult& AcceptAttachmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Attachment"))
  {
    m_attachment = jsonValue.GetObject("Attachment");

  }



  return *this;
}
