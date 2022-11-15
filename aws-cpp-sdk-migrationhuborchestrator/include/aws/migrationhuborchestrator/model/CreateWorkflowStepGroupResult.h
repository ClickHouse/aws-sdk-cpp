﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migrationhuborchestrator/model/Tool.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHubOrchestrator
{
namespace Model
{
  class AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowStepGroupResult
  {
  public:
    CreateWorkflowStepGroupResult();
    CreateWorkflowStepGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateWorkflowStepGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the migration workflow that contains the step group.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The ID of the migration workflow that contains the step group.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }

    /**
     * <p>The ID of the migration workflow that contains the step group.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }

    /**
     * <p>The ID of the migration workflow that contains the step group.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }

    /**
     * <p>The ID of the migration workflow that contains the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The ID of the migration workflow that contains the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the migration workflow that contains the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The name of the step group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step group.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the step group.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the step group.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The description of the step group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the step group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the step group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the step group.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const{ return m_tools; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline void SetTools(const Aws::Vector<Tool>& value) { m_tools = value; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline void SetTools(Aws::Vector<Tool>&& value) { m_tools = std::move(value); }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline CreateWorkflowStepGroupResult& WithTools(const Aws::Vector<Tool>& value) { SetTools(value); return *this;}

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline CreateWorkflowStepGroupResult& WithTools(Aws::Vector<Tool>&& value) { SetTools(std::move(value)); return *this;}

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline CreateWorkflowStepGroupResult& AddTools(const Tool& value) { m_tools.push_back(value); return *this; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline CreateWorkflowStepGroupResult& AddTools(Tool&& value) { m_tools.push_back(std::move(value)); return *this; }


    /**
     * <p>The next step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }

    /**
     * <p>The next step group.</p>
     */
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_next = value; }

    /**
     * <p>The next step group.</p>
     */
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_next = std::move(value); }

    /**
     * <p>The next step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}

    /**
     * <p>The next step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next step group.</p>
     */
    inline CreateWorkflowStepGroupResult& AddNext(const Aws::String& value) { m_next.push_back(value); return *this; }

    /**
     * <p>The next step group.</p>
     */
    inline CreateWorkflowStepGroupResult& AddNext(Aws::String&& value) { m_next.push_back(std::move(value)); return *this; }

    /**
     * <p>The next step group.</p>
     */
    inline CreateWorkflowStepGroupResult& AddNext(const char* value) { m_next.push_back(value); return *this; }


    /**
     * <p>The previous step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }

    /**
     * <p>The previous step group.</p>
     */
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previous = value; }

    /**
     * <p>The previous step group.</p>
     */
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previous = std::move(value); }

    /**
     * <p>The previous step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}

    /**
     * <p>The previous step group.</p>
     */
    inline CreateWorkflowStepGroupResult& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}

    /**
     * <p>The previous step group.</p>
     */
    inline CreateWorkflowStepGroupResult& AddPrevious(const Aws::String& value) { m_previous.push_back(value); return *this; }

    /**
     * <p>The previous step group.</p>
     */
    inline CreateWorkflowStepGroupResult& AddPrevious(Aws::String&& value) { m_previous.push_back(std::move(value)); return *this; }

    /**
     * <p>The previous step group.</p>
     */
    inline CreateWorkflowStepGroupResult& AddPrevious(const char* value) { m_previous.push_back(value); return *this; }


    /**
     * <p>The time at which the step group is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the step group is created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the step group is created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the step group is created.</p>
     */
    inline CreateWorkflowStepGroupResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the step group is created.</p>
     */
    inline CreateWorkflowStepGroupResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_workflowId;

    Aws::String m_name;

    Aws::String m_id;

    Aws::String m_description;

    Aws::Vector<Tool> m_tools;

    Aws::Vector<Aws::String> m_next;

    Aws::Vector<Aws::String> m_previous;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
