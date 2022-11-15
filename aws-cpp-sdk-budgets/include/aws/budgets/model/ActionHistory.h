﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/budgets/model/ActionStatus.h>
#include <aws/budgets/model/EventType.h>
#include <aws/budgets/model/ActionHistoryDetails.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>The historical records for a budget action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/ActionHistory">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API ActionHistory
  {
  public:
    ActionHistory();
    ActionHistory(Aws::Utils::Json::JsonView jsonValue);
    ActionHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    
    inline ActionHistory& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    
    inline ActionHistory& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The status of action at the time of the event. </p>
     */
    inline const ActionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of action at the time of the event. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of action at the time of the event. </p>
     */
    inline void SetStatus(const ActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of action at the time of the event. </p>
     */
    inline void SetStatus(ActionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of action at the time of the event. </p>
     */
    inline ActionHistory& WithStatus(const ActionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of action at the time of the event. </p>
     */
    inline ActionHistory& WithStatus(ActionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>This distinguishes between whether the events are triggered by the user or
     * are generated by the system. </p>
     */
    inline const EventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>This distinguishes between whether the events are triggered by the user or
     * are generated by the system. </p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>This distinguishes between whether the events are triggered by the user or
     * are generated by the system. </p>
     */
    inline void SetEventType(const EventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>This distinguishes between whether the events are triggered by the user or
     * are generated by the system. </p>
     */
    inline void SetEventType(EventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>This distinguishes between whether the events are triggered by the user or
     * are generated by the system. </p>
     */
    inline ActionHistory& WithEventType(const EventType& value) { SetEventType(value); return *this;}

    /**
     * <p>This distinguishes between whether the events are triggered by the user or
     * are generated by the system. </p>
     */
    inline ActionHistory& WithEventType(EventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>The description of the details for the event. </p>
     */
    inline const ActionHistoryDetails& GetActionHistoryDetails() const{ return m_actionHistoryDetails; }

    /**
     * <p>The description of the details for the event. </p>
     */
    inline bool ActionHistoryDetailsHasBeenSet() const { return m_actionHistoryDetailsHasBeenSet; }

    /**
     * <p>The description of the details for the event. </p>
     */
    inline void SetActionHistoryDetails(const ActionHistoryDetails& value) { m_actionHistoryDetailsHasBeenSet = true; m_actionHistoryDetails = value; }

    /**
     * <p>The description of the details for the event. </p>
     */
    inline void SetActionHistoryDetails(ActionHistoryDetails&& value) { m_actionHistoryDetailsHasBeenSet = true; m_actionHistoryDetails = std::move(value); }

    /**
     * <p>The description of the details for the event. </p>
     */
    inline ActionHistory& WithActionHistoryDetails(const ActionHistoryDetails& value) { SetActionHistoryDetails(value); return *this;}

    /**
     * <p>The description of the details for the event. </p>
     */
    inline ActionHistory& WithActionHistoryDetails(ActionHistoryDetails&& value) { SetActionHistoryDetails(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    ActionStatus m_status;
    bool m_statusHasBeenSet = false;

    EventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    ActionHistoryDetails m_actionHistoryDetails;
    bool m_actionHistoryDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
