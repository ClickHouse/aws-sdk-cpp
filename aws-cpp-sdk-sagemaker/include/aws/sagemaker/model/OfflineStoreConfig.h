﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/S3StorageConfig.h>
#include <aws/sagemaker/model/DataCatalogConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The configuration of an <code>OfflineStore</code>.</p> <p>Provide an
   * <code>OfflineStoreConfig</code> in a request to <code>CreateFeatureGroup</code>
   * to create an <code>OfflineStore</code>.</p> <p>To encrypt an
   * <code>OfflineStore</code> using at rest data encryption, specify Amazon Web
   * Services Key Management Service (KMS) key ID, or <code>KMSKeyId</code>, in
   * <code>S3StorageConfig</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OfflineStoreConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API OfflineStoreConfig
  {
  public:
    OfflineStoreConfig();
    OfflineStoreConfig(Aws::Utils::Json::JsonView jsonValue);
    OfflineStoreConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Simple Storage (Amazon S3) location of
     * <code>OfflineStore</code>.</p>
     */
    inline const S3StorageConfig& GetS3StorageConfig() const{ return m_s3StorageConfig; }

    /**
     * <p>The Amazon Simple Storage (Amazon S3) location of
     * <code>OfflineStore</code>.</p>
     */
    inline bool S3StorageConfigHasBeenSet() const { return m_s3StorageConfigHasBeenSet; }

    /**
     * <p>The Amazon Simple Storage (Amazon S3) location of
     * <code>OfflineStore</code>.</p>
     */
    inline void SetS3StorageConfig(const S3StorageConfig& value) { m_s3StorageConfigHasBeenSet = true; m_s3StorageConfig = value; }

    /**
     * <p>The Amazon Simple Storage (Amazon S3) location of
     * <code>OfflineStore</code>.</p>
     */
    inline void SetS3StorageConfig(S3StorageConfig&& value) { m_s3StorageConfigHasBeenSet = true; m_s3StorageConfig = std::move(value); }

    /**
     * <p>The Amazon Simple Storage (Amazon S3) location of
     * <code>OfflineStore</code>.</p>
     */
    inline OfflineStoreConfig& WithS3StorageConfig(const S3StorageConfig& value) { SetS3StorageConfig(value); return *this;}

    /**
     * <p>The Amazon Simple Storage (Amazon S3) location of
     * <code>OfflineStore</code>.</p>
     */
    inline OfflineStoreConfig& WithS3StorageConfig(S3StorageConfig&& value) { SetS3StorageConfig(std::move(value)); return *this;}


    /**
     * <p>Set to <code>True</code> to disable the automatic creation of an Amazon Web
     * Services Glue table when configuring an <code>OfflineStore</code>.</p>
     */
    inline bool GetDisableGlueTableCreation() const{ return m_disableGlueTableCreation; }

    /**
     * <p>Set to <code>True</code> to disable the automatic creation of an Amazon Web
     * Services Glue table when configuring an <code>OfflineStore</code>.</p>
     */
    inline bool DisableGlueTableCreationHasBeenSet() const { return m_disableGlueTableCreationHasBeenSet; }

    /**
     * <p>Set to <code>True</code> to disable the automatic creation of an Amazon Web
     * Services Glue table when configuring an <code>OfflineStore</code>.</p>
     */
    inline void SetDisableGlueTableCreation(bool value) { m_disableGlueTableCreationHasBeenSet = true; m_disableGlueTableCreation = value; }

    /**
     * <p>Set to <code>True</code> to disable the automatic creation of an Amazon Web
     * Services Glue table when configuring an <code>OfflineStore</code>.</p>
     */
    inline OfflineStoreConfig& WithDisableGlueTableCreation(bool value) { SetDisableGlueTableCreation(value); return *this;}


    /**
     * <p>The meta data of the Glue table that is autogenerated when an
     * <code>OfflineStore</code> is created. </p>
     */
    inline const DataCatalogConfig& GetDataCatalogConfig() const{ return m_dataCatalogConfig; }

    /**
     * <p>The meta data of the Glue table that is autogenerated when an
     * <code>OfflineStore</code> is created. </p>
     */
    inline bool DataCatalogConfigHasBeenSet() const { return m_dataCatalogConfigHasBeenSet; }

    /**
     * <p>The meta data of the Glue table that is autogenerated when an
     * <code>OfflineStore</code> is created. </p>
     */
    inline void SetDataCatalogConfig(const DataCatalogConfig& value) { m_dataCatalogConfigHasBeenSet = true; m_dataCatalogConfig = value; }

    /**
     * <p>The meta data of the Glue table that is autogenerated when an
     * <code>OfflineStore</code> is created. </p>
     */
    inline void SetDataCatalogConfig(DataCatalogConfig&& value) { m_dataCatalogConfigHasBeenSet = true; m_dataCatalogConfig = std::move(value); }

    /**
     * <p>The meta data of the Glue table that is autogenerated when an
     * <code>OfflineStore</code> is created. </p>
     */
    inline OfflineStoreConfig& WithDataCatalogConfig(const DataCatalogConfig& value) { SetDataCatalogConfig(value); return *this;}

    /**
     * <p>The meta data of the Glue table that is autogenerated when an
     * <code>OfflineStore</code> is created. </p>
     */
    inline OfflineStoreConfig& WithDataCatalogConfig(DataCatalogConfig&& value) { SetDataCatalogConfig(std::move(value)); return *this;}

  private:

    S3StorageConfig m_s3StorageConfig;
    bool m_s3StorageConfigHasBeenSet;

    bool m_disableGlueTableCreation;
    bool m_disableGlueTableCreationHasBeenSet;

    DataCatalogConfig m_dataCatalogConfig;
    bool m_dataCatalogConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
