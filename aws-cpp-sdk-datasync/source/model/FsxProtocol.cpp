﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/FsxProtocol.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

FsxProtocol::FsxProtocol() : 
    m_nFSHasBeenSet(false)
{
}

FsxProtocol::FsxProtocol(JsonView jsonValue) : 
    m_nFSHasBeenSet(false)
{
  *this = jsonValue;
}

FsxProtocol& FsxProtocol::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NFS"))
  {
    m_nFS = jsonValue.GetObject("NFS");

    m_nFSHasBeenSet = true;
  }

  return *this;
}

JsonValue FsxProtocol::Jsonize() const
{
  JsonValue payload;

  if(m_nFSHasBeenSet)
  {
   payload.WithObject("NFS", m_nFS.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
