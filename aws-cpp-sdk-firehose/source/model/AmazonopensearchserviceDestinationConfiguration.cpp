﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/AmazonopensearchserviceDestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

AmazonopensearchserviceDestinationConfiguration::AmazonopensearchserviceDestinationConfiguration() : 
    m_roleARNHasBeenSet(false),
    m_domainARNHasBeenSet(false),
    m_clusterEndpointHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_indexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod::NOT_SET),
    m_indexRotationPeriodHasBeenSet(false),
    m_bufferingHintsHasBeenSet(false),
    m_retryOptionsHasBeenSet(false),
    m_s3BackupMode(AmazonopensearchserviceS3BackupMode::NOT_SET),
    m_s3BackupModeHasBeenSet(false),
    m_s3ConfigurationHasBeenSet(false),
    m_processingConfigurationHasBeenSet(false),
    m_cloudWatchLoggingOptionsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
}

AmazonopensearchserviceDestinationConfiguration::AmazonopensearchserviceDestinationConfiguration(JsonView jsonValue) : 
    m_roleARNHasBeenSet(false),
    m_domainARNHasBeenSet(false),
    m_clusterEndpointHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_indexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod::NOT_SET),
    m_indexRotationPeriodHasBeenSet(false),
    m_bufferingHintsHasBeenSet(false),
    m_retryOptionsHasBeenSet(false),
    m_s3BackupMode(AmazonopensearchserviceS3BackupMode::NOT_SET),
    m_s3BackupModeHasBeenSet(false),
    m_s3ConfigurationHasBeenSet(false),
    m_processingConfigurationHasBeenSet(false),
    m_cloudWatchLoggingOptionsHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AmazonopensearchserviceDestinationConfiguration& AmazonopensearchserviceDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainARN"))
  {
    m_domainARN = jsonValue.GetString("DomainARN");

    m_domainARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterEndpoint"))
  {
    m_clusterEndpoint = jsonValue.GetString("ClusterEndpoint");

    m_clusterEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");

    m_typeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexRotationPeriod"))
  {
    m_indexRotationPeriod = AmazonopensearchserviceIndexRotationPeriodMapper::GetAmazonopensearchserviceIndexRotationPeriodForName(jsonValue.GetString("IndexRotationPeriod"));

    m_indexRotationPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BufferingHints"))
  {
    m_bufferingHints = jsonValue.GetObject("BufferingHints");

    m_bufferingHintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryOptions"))
  {
    m_retryOptions = jsonValue.GetObject("RetryOptions");

    m_retryOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BackupMode"))
  {
    m_s3BackupMode = AmazonopensearchserviceS3BackupModeMapper::GetAmazonopensearchserviceS3BackupModeForName(jsonValue.GetString("S3BackupMode"));

    m_s3BackupModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("S3Configuration");

    m_s3ConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingConfiguration"))
  {
    m_processingConfiguration = jsonValue.GetObject("ProcessingConfiguration");

    m_processingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLoggingOptions"))
  {
    m_cloudWatchLoggingOptions = jsonValue.GetObject("CloudWatchLoggingOptions");

    m_cloudWatchLoggingOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AmazonopensearchserviceDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_domainARNHasBeenSet)
  {
   payload.WithString("DomainARN", m_domainARN);

  }

  if(m_clusterEndpointHasBeenSet)
  {
   payload.WithString("ClusterEndpoint", m_clusterEndpoint);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_indexRotationPeriodHasBeenSet)
  {
   payload.WithString("IndexRotationPeriod", AmazonopensearchserviceIndexRotationPeriodMapper::GetNameForAmazonopensearchserviceIndexRotationPeriod(m_indexRotationPeriod));
  }

  if(m_bufferingHintsHasBeenSet)
  {
   payload.WithObject("BufferingHints", m_bufferingHints.Jsonize());

  }

  if(m_retryOptionsHasBeenSet)
  {
   payload.WithObject("RetryOptions", m_retryOptions.Jsonize());

  }

  if(m_s3BackupModeHasBeenSet)
  {
   payload.WithString("S3BackupMode", AmazonopensearchserviceS3BackupModeMapper::GetNameForAmazonopensearchserviceS3BackupMode(m_s3BackupMode));
  }

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("S3Configuration", m_s3Configuration.Jsonize());

  }

  if(m_processingConfigurationHasBeenSet)
  {
   payload.WithObject("ProcessingConfiguration", m_processingConfiguration.Jsonize());

  }

  if(m_cloudWatchLoggingOptionsHasBeenSet)
  {
   payload.WithObject("CloudWatchLoggingOptions", m_cloudWatchLoggingOptions.Jsonize());

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
