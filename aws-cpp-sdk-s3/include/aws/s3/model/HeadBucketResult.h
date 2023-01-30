/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ArchiveStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/s3/model/StorageClass.h>
#include <aws/s3/model/RequestCharged.h>
#include <aws/s3/model/ReplicationStatus.h>
#include <aws/s3/model/ObjectLockMode.h>
#include <aws/s3/model/ObjectLockLegalHoldStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class HeadBucketResult
  {
  public:
    AWS_S3_API HeadBucketResult();
    AWS_S3_API HeadBucketResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API HeadBucketResult(Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>&& result);
    AWS_S3_API HeadBucketResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument> result);


    /**
     * <p>Specifies whether the object retrieved was (<code>true</code>) or was not
     * (<code>false</code>) a delete marker. If <code>false</code>, this response
     * header does not appear in the response.</p>
     */
    inline std::string GetRegion() const{ return m_region; }

    /**
     * <p>Specifies whether the object retrieved was (<code>true</code>) or was not
     * (<code>false</code>) a delete marker. If <code>false</code>, this response
     * header does not appear in the response.</p>
     */
    inline void SetRegion(std::string value) { m_region = value; }

  private:

    std::string m_region;

  };

} // namespace Model
} // namespace S3
} // namespace Aws
