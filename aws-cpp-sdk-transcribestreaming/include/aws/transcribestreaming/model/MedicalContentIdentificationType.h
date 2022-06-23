﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
  enum class MedicalContentIdentificationType
  {
    NOT_SET,
    PHI
  };

namespace MedicalContentIdentificationTypeMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalContentIdentificationType GetMedicalContentIdentificationTypeForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForMedicalContentIdentificationType(MedicalContentIdentificationType value);
} // namespace MedicalContentIdentificationTypeMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
