﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MpdTimedMetadata.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace MpdTimedMetadataMapper
      {

        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        MpdTimedMetadata GetMpdTimedMetadataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return MpdTimedMetadata::PASSTHROUGH;
          }
          else if (hashCode == NONE_HASH)
          {
            return MpdTimedMetadata::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MpdTimedMetadata>(hashCode);
          }

          return MpdTimedMetadata::NOT_SET;
        }

        Aws::String GetNameForMpdTimedMetadata(MpdTimedMetadata enumValue)
        {
          switch(enumValue)
          {
          case MpdTimedMetadata::PASSTHROUGH:
            return "PASSTHROUGH";
          case MpdTimedMetadata::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MpdTimedMetadataMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
