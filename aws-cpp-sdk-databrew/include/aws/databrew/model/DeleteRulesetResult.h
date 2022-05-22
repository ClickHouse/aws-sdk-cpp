﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class AWS_GLUEDATABREW_API DeleteRulesetResult
  {
  public:
    DeleteRulesetResult();
    DeleteRulesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteRulesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the deleted ruleset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the deleted ruleset.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the deleted ruleset.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the deleted ruleset.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the deleted ruleset.</p>
     */
    inline DeleteRulesetResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the deleted ruleset.</p>
     */
    inline DeleteRulesetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the deleted ruleset.</p>
     */
    inline DeleteRulesetResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
