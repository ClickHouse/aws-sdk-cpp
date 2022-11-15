﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The details that identify a resource that is discovered by Config, including
   * the resource type, ID, and (if available) the custom resource
   * name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ResourceIdentifier">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ResourceIdentifier
  {
  public:
    ResourceIdentifier();
    ResourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    ResourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline ResourceIdentifier& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline ResourceIdentifier& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline ResourceIdentifier& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline ResourceIdentifier& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline ResourceIdentifier& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline ResourceIdentifier& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline ResourceIdentifier& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The custom name of the resource (if available).</p>
     */
    inline ResourceIdentifier& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The time that the resource was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetResourceDeletionTime() const{ return m_resourceDeletionTime; }

    /**
     * <p>The time that the resource was deleted.</p>
     */
    inline bool ResourceDeletionTimeHasBeenSet() const { return m_resourceDeletionTimeHasBeenSet; }

    /**
     * <p>The time that the resource was deleted.</p>
     */
    inline void SetResourceDeletionTime(const Aws::Utils::DateTime& value) { m_resourceDeletionTimeHasBeenSet = true; m_resourceDeletionTime = value; }

    /**
     * <p>The time that the resource was deleted.</p>
     */
    inline void SetResourceDeletionTime(Aws::Utils::DateTime&& value) { m_resourceDeletionTimeHasBeenSet = true; m_resourceDeletionTime = std::move(value); }

    /**
     * <p>The time that the resource was deleted.</p>
     */
    inline ResourceIdentifier& WithResourceDeletionTime(const Aws::Utils::DateTime& value) { SetResourceDeletionTime(value); return *this;}

    /**
     * <p>The time that the resource was deleted.</p>
     */
    inline ResourceIdentifier& WithResourceDeletionTime(Aws::Utils::DateTime&& value) { SetResourceDeletionTime(std::move(value)); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::Utils::DateTime m_resourceDeletionTime;
    bool m_resourceDeletionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
