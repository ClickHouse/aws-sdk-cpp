﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Returned if there's not enough capacity to provision additional throughput.
   * This value might be returned when you try to create a file system in provisioned
   * throughput mode, when you attempt to increase the provisioned throughput of an
   * existing file system, or when you attempt to change an existing file system from
   * Bursting Throughput to Provisioned Throughput mode. Try again
   * later.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/InsufficientThroughputCapacity">AWS
   * API Reference</a></p>
   */
  class AWS_EFS_API InsufficientThroughputCapacity
  {
  public:
    InsufficientThroughputCapacity();
    InsufficientThroughputCapacity(Aws::Utils::Json::JsonView jsonValue);
    InsufficientThroughputCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    
    inline InsufficientThroughputCapacity& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    
    inline InsufficientThroughputCapacity& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    
    inline InsufficientThroughputCapacity& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InsufficientThroughputCapacity& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InsufficientThroughputCapacity& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InsufficientThroughputCapacity& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
