/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/model/InvalidObjectState.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::S3;
using namespace Aws::S3::Model;

namespace Aws
{
namespace S3
{
template<> AWS_S3_API InvalidObjectState S3Error::GetModeledError()
{
  assert(this->GetErrorType() == S3Errors::INVALID_OBJECT_STATE);
  return InvalidObjectState(this->GetXmlPayload().GetRootElement());
}

namespace S3ErrorMapper
{

static const int NO_SUCH_UPLOAD_HASH = HashingUtils::HashString("NoSuchUpload");
static const int ENCRYPTION_TYPE_MISMATCH_HASH = HashingUtils::HashString("EncryptionTypeMismatch");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequest");
static const int BUCKET_ALREADY_OWNED_BY_YOU_HASH = HashingUtils::HashString("BucketAlreadyOwnedByYou");
static const int INVALID_WRITE_OFFSET_HASH = HashingUtils::HashString("InvalidWriteOffset");
static const int OBJECT_ALREADY_IN_ACTIVE_TIER_HASH = HashingUtils::HashString("ObjectAlreadyInActiveTierError");
static const int NO_SUCH_BUCKET_HASH = HashingUtils::HashString("NoSuchBucket");
static const int TOO_MANY_PARTS_HASH = HashingUtils::HashString("TooManyParts");
static const int IDEMPOTENCY_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotencyParameterMismatch");
static const int NO_SUCH_KEY_HASH = HashingUtils::HashString("NoSuchKey");
static const int OBJECT_NOT_IN_ACTIVE_TIER_HASH = HashingUtils::HashString("ObjectNotInActiveTierError");
static const int BUCKET_ALREADY_EXISTS_HASH = HashingUtils::HashString("BucketAlreadyExists");
static const int INVALID_OBJECT_STATE_HASH = HashingUtils::HashString("InvalidObjectState");
// MinIO compatibility error hashes (all MinIO errors handled here for S3 compatibility)
static const int MINIO_INTERNAL_ERROR_HASH = HashingUtils::HashString("InternalError");
static const int MINIO_SERVER_NOT_INITIALIZED_HASH = HashingUtils::HashString("XMinioServerNotInitialized");
static const int MINIO_IAM_NOT_INITIALIZED_HASH = HashingUtils::HashString("XMinioIAMNotInitialized");
static const int MINIO_BUCKET_METADATA_NOT_INITIALIZED_HASH = HashingUtils::HashString("XMinioBucketMetadataNotInitialized");
static const int MINIO_SERVER_BUSY_HASH = HashingUtils::HashString("ServerBusy");
static const int MINIO_TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequests");
static const int MINIO_SLOW_DOWN_READ_HASH = HashingUtils::HashString("SlowDownRead");
static const int MINIO_SLOW_DOWN_WRITE_HASH = HashingUtils::HashString("SlowDownWrite");
static const int MINIO_REQUEST_TIME_TOO_SKEWED_HASH = HashingUtils::HashString("RequestTimeTooSkewed");
static const int MINIO_REQUEST_TIMEOUT_HASH = HashingUtils::HashString("RequestTimeout");
static const int MINIO_CLIENT_DISCONNECTED_HASH = HashingUtils::HashString("ClientDisconnected");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NO_SUCH_UPLOAD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::NO_SUCH_UPLOAD), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ENCRYPTION_TYPE_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::ENCRYPTION_TYPE_MISMATCH), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BUCKET_ALREADY_OWNED_BY_YOU_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::BUCKET_ALREADY_OWNED_BY_YOU), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_WRITE_OFFSET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::INVALID_WRITE_OFFSET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OBJECT_ALREADY_IN_ACTIVE_TIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::OBJECT_ALREADY_IN_ACTIVE_TIER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_BUCKET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::NO_SUCH_BUCKET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_PARTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::TOO_MANY_PARTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == IDEMPOTENCY_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::IDEMPOTENCY_PARAMETER_MISMATCH), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::NO_SUCH_KEY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OBJECT_NOT_IN_ACTIVE_TIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::OBJECT_NOT_IN_ACTIVE_TIER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BUCKET_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::BUCKET_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_OBJECT_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::INVALID_OBJECT_STATE), RetryableType::NOT_RETRYABLE);
  }
  // MinIO compatibility error mappings (all MinIO errors handled in S3ErrorMapper for priority)
  else if (hashCode == MINIO_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::INTERNAL_FAILURE), RetryableType::RETRYABLE);
  }
  else if (hashCode == MINIO_SERVER_NOT_INITIALIZED_HASH || 
           hashCode == MINIO_IAM_NOT_INITIALIZED_HASH ||
           hashCode == MINIO_BUCKET_METADATA_NOT_INITIALIZED_HASH ||
           hashCode == MINIO_SERVER_BUSY_HASH ||
           hashCode == MINIO_CLIENT_DISCONNECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::SERVICE_UNAVAILABLE), RetryableType::RETRYABLE);
  }
  else if (hashCode == MINIO_TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::THROTTLING), RetryableType::RETRYABLE);
  }
  else if (hashCode == MINIO_SLOW_DOWN_READ_HASH || hashCode == MINIO_SLOW_DOWN_WRITE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::SLOW_DOWN), RetryableType::RETRYABLE);
  }
  else if (hashCode == MINIO_REQUEST_TIME_TOO_SKEWED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::REQUEST_TIME_TOO_SKEWED), RetryableType::RETRYABLE);
  }
  else if (hashCode == MINIO_REQUEST_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::REQUEST_TIMEOUT), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace S3ErrorMapper
} // namespace S3
} // namespace Aws
