﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace ConfigurationStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ConfigurationStatus GetConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ConfigurationStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ConfigurationStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationStatus>(hashCode);
          }

          return ConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForConfigurationStatus(ConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationStatus::ENABLED:
            return "ENABLED";
          case ConfigurationStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationStatusMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
