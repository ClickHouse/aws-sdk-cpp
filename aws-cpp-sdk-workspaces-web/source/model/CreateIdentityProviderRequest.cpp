﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/CreateIdentityProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIdentityProviderRequest::CreateIdentityProviderRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_identityProviderDetailsHasBeenSet(false),
    m_identityProviderNameHasBeenSet(false),
    m_identityProviderType(IdentityProviderType::NOT_SET),
    m_identityProviderTypeHasBeenSet(false),
    m_portalArnHasBeenSet(false)
{
}

Aws::String CreateIdentityProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_identityProviderDetailsHasBeenSet)
  {
   JsonValue identityProviderDetailsJsonMap;
   for(auto& identityProviderDetailsItem : m_identityProviderDetails)
   {
     identityProviderDetailsJsonMap.WithString(identityProviderDetailsItem.first, identityProviderDetailsItem.second);
   }
   payload.WithObject("identityProviderDetails", std::move(identityProviderDetailsJsonMap));

  }

  if(m_identityProviderNameHasBeenSet)
  {
   payload.WithString("identityProviderName", m_identityProviderName);

  }

  if(m_identityProviderTypeHasBeenSet)
  {
   payload.WithString("identityProviderType", IdentityProviderTypeMapper::GetNameForIdentityProviderType(m_identityProviderType));
  }

  if(m_portalArnHasBeenSet)
  {
   payload.WithString("portalArn", m_portalArn);

  }

  return payload.View().WriteReadable();
}




