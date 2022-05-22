﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>This structure specifies how to split the data into train and test datasets.
   * The validation and training datasets must contain the same headers. The
   * validation dataset must be less than 2 GB in size.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLDataSplitConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AutoMLDataSplitConfig
  {
  public:
    AutoMLDataSplitConfig();
    AutoMLDataSplitConfig(Aws::Utils::Json::JsonView jsonValue);
    AutoMLDataSplitConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The validation fraction (optional) is a float that specifies the portion of
     * the training dataset to be used for validation. The default value is 0.2, and
     * values can range from 0 to 1. We recommend setting this value to be less than
     * 0.5.</p>
     */
    inline double GetValidationFraction() const{ return m_validationFraction; }

    /**
     * <p>The validation fraction (optional) is a float that specifies the portion of
     * the training dataset to be used for validation. The default value is 0.2, and
     * values can range from 0 to 1. We recommend setting this value to be less than
     * 0.5.</p>
     */
    inline bool ValidationFractionHasBeenSet() const { return m_validationFractionHasBeenSet; }

    /**
     * <p>The validation fraction (optional) is a float that specifies the portion of
     * the training dataset to be used for validation. The default value is 0.2, and
     * values can range from 0 to 1. We recommend setting this value to be less than
     * 0.5.</p>
     */
    inline void SetValidationFraction(double value) { m_validationFractionHasBeenSet = true; m_validationFraction = value; }

    /**
     * <p>The validation fraction (optional) is a float that specifies the portion of
     * the training dataset to be used for validation. The default value is 0.2, and
     * values can range from 0 to 1. We recommend setting this value to be less than
     * 0.5.</p>
     */
    inline AutoMLDataSplitConfig& WithValidationFraction(double value) { SetValidationFraction(value); return *this;}

  private:

    double m_validationFraction;
    bool m_validationFractionHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
