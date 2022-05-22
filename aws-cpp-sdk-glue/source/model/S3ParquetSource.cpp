﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/S3ParquetSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

S3ParquetSource::S3ParquetSource() : 
    m_nameHasBeenSet(false),
    m_pathsHasBeenSet(false),
    m_compressionType(ParquetCompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_exclusionsHasBeenSet(false),
    m_groupSizeHasBeenSet(false),
    m_groupFilesHasBeenSet(false),
    m_recurse(false),
    m_recurseHasBeenSet(false),
    m_maxBand(0),
    m_maxBandHasBeenSet(false),
    m_maxFilesInBand(0),
    m_maxFilesInBandHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
}

S3ParquetSource::S3ParquetSource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_pathsHasBeenSet(false),
    m_compressionType(ParquetCompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_exclusionsHasBeenSet(false),
    m_groupSizeHasBeenSet(false),
    m_groupFilesHasBeenSet(false),
    m_recurse(false),
    m_recurseHasBeenSet(false),
    m_maxBand(0),
    m_maxBandHasBeenSet(false),
    m_maxFilesInBand(0),
    m_maxFilesInBandHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
  *this = jsonValue;
}

S3ParquetSource& S3ParquetSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Paths"))
  {
    Array<JsonView> pathsJsonList = jsonValue.GetArray("Paths");
    for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
    {
      m_paths.push_back(pathsJsonList[pathsIndex].AsString());
    }
    m_pathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompressionType"))
  {
    m_compressionType = ParquetCompressionTypeMapper::GetParquetCompressionTypeForName(jsonValue.GetString("CompressionType"));

    m_compressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exclusions"))
  {
    Array<JsonView> exclusionsJsonList = jsonValue.GetArray("Exclusions");
    for(unsigned exclusionsIndex = 0; exclusionsIndex < exclusionsJsonList.GetLength(); ++exclusionsIndex)
    {
      m_exclusions.push_back(exclusionsJsonList[exclusionsIndex].AsString());
    }
    m_exclusionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupSize"))
  {
    m_groupSize = jsonValue.GetString("GroupSize");

    m_groupSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupFiles"))
  {
    m_groupFiles = jsonValue.GetString("GroupFiles");

    m_groupFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Recurse"))
  {
    m_recurse = jsonValue.GetBool("Recurse");

    m_recurseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxBand"))
  {
    m_maxBand = jsonValue.GetInteger("MaxBand");

    m_maxBandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxFilesInBand"))
  {
    m_maxFilesInBand = jsonValue.GetInteger("MaxFilesInBand");

    m_maxFilesInBandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalOptions"))
  {
    m_additionalOptions = jsonValue.GetObject("AdditionalOptions");

    m_additionalOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputSchemas"))
  {
    Array<JsonView> outputSchemasJsonList = jsonValue.GetArray("OutputSchemas");
    for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
    {
      m_outputSchemas.push_back(outputSchemasJsonList[outputSchemasIndex].AsObject());
    }
    m_outputSchemasHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ParquetSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_pathsHasBeenSet)
  {
   Array<JsonValue> pathsJsonList(m_paths.size());
   for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
   {
     pathsJsonList[pathsIndex].AsString(m_paths[pathsIndex]);
   }
   payload.WithArray("Paths", std::move(pathsJsonList));

  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("CompressionType", ParquetCompressionTypeMapper::GetNameForParquetCompressionType(m_compressionType));
  }

  if(m_exclusionsHasBeenSet)
  {
   Array<JsonValue> exclusionsJsonList(m_exclusions.size());
   for(unsigned exclusionsIndex = 0; exclusionsIndex < exclusionsJsonList.GetLength(); ++exclusionsIndex)
   {
     exclusionsJsonList[exclusionsIndex].AsString(m_exclusions[exclusionsIndex]);
   }
   payload.WithArray("Exclusions", std::move(exclusionsJsonList));

  }

  if(m_groupSizeHasBeenSet)
  {
   payload.WithString("GroupSize", m_groupSize);

  }

  if(m_groupFilesHasBeenSet)
  {
   payload.WithString("GroupFiles", m_groupFiles);

  }

  if(m_recurseHasBeenSet)
  {
   payload.WithBool("Recurse", m_recurse);

  }

  if(m_maxBandHasBeenSet)
  {
   payload.WithInteger("MaxBand", m_maxBand);

  }

  if(m_maxFilesInBandHasBeenSet)
  {
   payload.WithInteger("MaxFilesInBand", m_maxFilesInBand);

  }

  if(m_additionalOptionsHasBeenSet)
  {
   payload.WithObject("AdditionalOptions", m_additionalOptions.Jsonize());

  }

  if(m_outputSchemasHasBeenSet)
  {
   Array<JsonValue> outputSchemasJsonList(m_outputSchemas.size());
   for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
   {
     outputSchemasJsonList[outputSchemasIndex].AsObject(m_outputSchemas[outputSchemasIndex].Jsonize());
   }
   payload.WithArray("OutputSchemas", std::move(outputSchemasJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
