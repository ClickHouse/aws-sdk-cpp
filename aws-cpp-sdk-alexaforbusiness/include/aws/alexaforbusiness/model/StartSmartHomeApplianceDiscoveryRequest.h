﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API StartSmartHomeApplianceDiscoveryRequest : public AlexaForBusinessRequest
  {
  public:
    StartSmartHomeApplianceDiscoveryRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSmartHomeApplianceDiscovery"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The room where smart home appliance discovery was initiated.</p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The room where smart home appliance discovery was initiated.</p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArnHasBeenSet = true; m_roomArn = value; }

    /**
     * <p>The room where smart home appliance discovery was initiated.</p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArnHasBeenSet = true; m_roomArn = std::move(value); }

    /**
     * <p>The room where smart home appliance discovery was initiated.</p>
     */
    inline void SetRoomArn(const char* value) { m_roomArnHasBeenSet = true; m_roomArn.assign(value); }

    /**
     * <p>The room where smart home appliance discovery was initiated.</p>
     */
    inline StartSmartHomeApplianceDiscoveryRequest& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The room where smart home appliance discovery was initiated.</p>
     */
    inline StartSmartHomeApplianceDiscoveryRequest& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The room where smart home appliance discovery was initiated.</p>
     */
    inline StartSmartHomeApplianceDiscoveryRequest& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}

  private:

    Aws::String m_roomArn;
    bool m_roomArnHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws