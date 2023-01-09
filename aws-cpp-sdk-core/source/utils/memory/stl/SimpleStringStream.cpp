/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/SimpleStringStream.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{

SimpleStringStream::SimpleStringStream() :
    base(&m_streamBuffer),
    m_streamBuffer()
{
}

SimpleStringStream::SimpleStringStream(const Aws::String& value) :
    base(&m_streamBuffer),
    m_streamBuffer(value)
{
}

SimpleStringStream::SimpleStringStream(ExternalMemoryPtr memory, size_t size) :
    base(&m_streamBuffer),
    m_streamBuffer(std::move(memory), size)
{
}

void SimpleStringStream::str(const Aws::String& value)
{
    m_streamBuffer.str(value);
}

//

SimpleIStringStream::SimpleIStringStream() :
    base(&m_streamBuffer),
    m_streamBuffer()
{
}

SimpleIStringStream::SimpleIStringStream(const Aws::String& value) :
    base(&m_streamBuffer),
    m_streamBuffer(value)
{
}

void SimpleIStringStream::str(const Aws::String& value)
{
    m_streamBuffer.str(value);
}

//

SimpleOStringStream::SimpleOStringStream() :
    base(&m_streamBuffer),
    m_streamBuffer()
{
}

SimpleOStringStream::SimpleOStringStream(const Aws::String& value) :
    base(&m_streamBuffer),
    m_streamBuffer(value)
{
}

void SimpleOStringStream::str(const Aws::String& value)
{
    m_streamBuffer.str(value);
}

void OtherStream::startReadingFromStart()
{
    if (impl)
    {
        impl->clear();
        impl->seekg(0);
    }
    else
    {
        ss.clear();
        ss.seekg(0);
    }
}

std::shared_ptr<std::basic_iostream<char, std::char_traits<char>>> OtherStream::toStream()
{
    if (impl)
        throw std::runtime_error("cannot convert to std::basic_istream");

    return std::make_shared<std::stringstream>(std::move(ss));
}

size_t OtherStream::getNumWrittenBytes()
{
    if (impl)
        return impl->tellp();
    else
        return ss.tellp();
}

} // namespace Aws
