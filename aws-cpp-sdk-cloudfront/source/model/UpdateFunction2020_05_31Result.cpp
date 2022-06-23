﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/UpdateFunction2020_05_31Result.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

UpdateFunction2020_05_31Result::UpdateFunction2020_05_31Result()
{
}

UpdateFunction2020_05_31Result::UpdateFunction2020_05_31Result(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

UpdateFunction2020_05_31Result& UpdateFunction2020_05_31Result::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    m_functionSummary = resultNode;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& eTagIter = headers.find("ettag");
  if(eTagIter != headers.end())
  {
    m_eTag = eTagIter->second;
  }

  return *this;
}
