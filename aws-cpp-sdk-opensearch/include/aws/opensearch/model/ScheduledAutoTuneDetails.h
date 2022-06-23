﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/ScheduledAutoTuneActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ScheduledAutoTuneSeverityType.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Specifies details about the scheduled Auto-Tune action. See <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
   * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
   * information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ScheduledAutoTuneDetails">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API ScheduledAutoTuneDetails
  {
  public:
    ScheduledAutoTuneDetails();
    ScheduledAutoTuneDetails(Aws::Utils::Json::JsonView jsonValue);
    ScheduledAutoTuneDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of the Auto-Tune action scheduled for the domain.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The timestamp of the Auto-Tune action scheduled for the domain.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The timestamp of the Auto-Tune action scheduled for the domain.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The timestamp of the Auto-Tune action scheduled for the domain.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The timestamp of the Auto-Tune action scheduled for the domain.</p>
     */
    inline ScheduledAutoTuneDetails& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The timestamp of the Auto-Tune action scheduled for the domain.</p>
     */
    inline ScheduledAutoTuneDetails& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}


    /**
     * <p>The Auto-Tune action type. Valid values are JVM_HEAP_SIZE_TUNING and
     * JVM_YOUNG_GEN_TUNING.</p>
     */
    inline const ScheduledAutoTuneActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The Auto-Tune action type. Valid values are JVM_HEAP_SIZE_TUNING and
     * JVM_YOUNG_GEN_TUNING.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The Auto-Tune action type. Valid values are JVM_HEAP_SIZE_TUNING and
     * JVM_YOUNG_GEN_TUNING.</p>
     */
    inline void SetActionType(const ScheduledAutoTuneActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The Auto-Tune action type. Valid values are JVM_HEAP_SIZE_TUNING and
     * JVM_YOUNG_GEN_TUNING.</p>
     */
    inline void SetActionType(ScheduledAutoTuneActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The Auto-Tune action type. Valid values are JVM_HEAP_SIZE_TUNING and
     * JVM_YOUNG_GEN_TUNING.</p>
     */
    inline ScheduledAutoTuneDetails& WithActionType(const ScheduledAutoTuneActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The Auto-Tune action type. Valid values are JVM_HEAP_SIZE_TUNING and
     * JVM_YOUNG_GEN_TUNING.</p>
     */
    inline ScheduledAutoTuneDetails& WithActionType(ScheduledAutoTuneActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>The Auto-Tune action description.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The Auto-Tune action description.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The Auto-Tune action description.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The Auto-Tune action description.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The Auto-Tune action description.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The Auto-Tune action description.</p>
     */
    inline ScheduledAutoTuneDetails& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The Auto-Tune action description.</p>
     */
    inline ScheduledAutoTuneDetails& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The Auto-Tune action description.</p>
     */
    inline ScheduledAutoTuneDetails& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The Auto-Tune action severity. Valid values are LOW, MEDIUM, and HIGH.</p>
     */
    inline const ScheduledAutoTuneSeverityType& GetSeverity() const{ return m_severity; }

    /**
     * <p>The Auto-Tune action severity. Valid values are LOW, MEDIUM, and HIGH.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The Auto-Tune action severity. Valid values are LOW, MEDIUM, and HIGH.</p>
     */
    inline void SetSeverity(const ScheduledAutoTuneSeverityType& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The Auto-Tune action severity. Valid values are LOW, MEDIUM, and HIGH.</p>
     */
    inline void SetSeverity(ScheduledAutoTuneSeverityType&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The Auto-Tune action severity. Valid values are LOW, MEDIUM, and HIGH.</p>
     */
    inline ScheduledAutoTuneDetails& WithSeverity(const ScheduledAutoTuneSeverityType& value) { SetSeverity(value); return *this;}

    /**
     * <p>The Auto-Tune action severity. Valid values are LOW, MEDIUM, and HIGH.</p>
     */
    inline ScheduledAutoTuneDetails& WithSeverity(ScheduledAutoTuneSeverityType&& value) { SetSeverity(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet;

    ScheduledAutoTuneActionType m_actionType;
    bool m_actionTypeHasBeenSet;

    Aws::String m_action;
    bool m_actionHasBeenSet;

    ScheduledAutoTuneSeverityType m_severity;
    bool m_severityHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
