﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCacheSetting.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ModelCacheSettingMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        ModelCacheSetting GetModelCacheSettingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return ModelCacheSetting::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return ModelCacheSetting::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCacheSetting>(hashCode);
          }

          return ModelCacheSetting::NOT_SET;
        }

        Aws::String GetNameForModelCacheSetting(ModelCacheSetting enumValue)
        {
          switch(enumValue)
          {
          case ModelCacheSetting::Enabled:
            return "Enabled";
          case ModelCacheSetting::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelCacheSettingMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
