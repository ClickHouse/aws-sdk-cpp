﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/ResponseHeadersPolicySummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A list of response headers policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyList">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ResponseHeadersPolicyList
  {
  public:
    ResponseHeadersPolicyList();
    ResponseHeadersPolicyList(const Aws::Utils::Xml::XmlNode& xmlNode);
    ResponseHeadersPolicyList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing response headers policies
     * where you left off.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing response headers policies
     * where you left off.</p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing response headers policies
     * where you left off.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing response headers policies
     * where you left off.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing response headers policies
     * where you left off.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing response headers policies
     * where you left off.</p>
     */
    inline ResponseHeadersPolicyList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing response headers policies
     * where you left off.</p>
     */
    inline ResponseHeadersPolicyList& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing response headers policies
     * where you left off.</p>
     */
    inline ResponseHeadersPolicyList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The maximum number of response headers policies requested.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of response headers policies requested.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of response headers policies requested.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of response headers policies requested.</p>
     */
    inline ResponseHeadersPolicyList& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>The number of response headers policies returned.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of response headers policies returned.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of response headers policies returned.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of response headers policies returned.</p>
     */
    inline ResponseHeadersPolicyList& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The response headers policies in the list.</p>
     */
    inline const Aws::Vector<ResponseHeadersPolicySummary>& GetItems() const{ return m_items; }

    /**
     * <p>The response headers policies in the list.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The response headers policies in the list.</p>
     */
    inline void SetItems(const Aws::Vector<ResponseHeadersPolicySummary>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The response headers policies in the list.</p>
     */
    inline void SetItems(Aws::Vector<ResponseHeadersPolicySummary>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The response headers policies in the list.</p>
     */
    inline ResponseHeadersPolicyList& WithItems(const Aws::Vector<ResponseHeadersPolicySummary>& value) { SetItems(value); return *this;}

    /**
     * <p>The response headers policies in the list.</p>
     */
    inline ResponseHeadersPolicyList& WithItems(Aws::Vector<ResponseHeadersPolicySummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The response headers policies in the list.</p>
     */
    inline ResponseHeadersPolicyList& AddItems(const ResponseHeadersPolicySummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The response headers policies in the list.</p>
     */
    inline ResponseHeadersPolicyList& AddItems(ResponseHeadersPolicySummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<ResponseHeadersPolicySummary> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
