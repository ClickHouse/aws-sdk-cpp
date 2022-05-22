﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ImscAccessibilitySubs.h>
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
      namespace ImscAccessibilitySubsMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        ImscAccessibilitySubs GetImscAccessibilitySubsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return ImscAccessibilitySubs::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return ImscAccessibilitySubs::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImscAccessibilitySubs>(hashCode);
          }

          return ImscAccessibilitySubs::NOT_SET;
        }

        Aws::String GetNameForImscAccessibilitySubs(ImscAccessibilitySubs enumValue)
        {
          switch(enumValue)
          {
          case ImscAccessibilitySubs::DISABLED:
            return "DISABLED";
          case ImscAccessibilitySubs::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImscAccessibilitySubsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
