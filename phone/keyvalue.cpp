#include "keyvalue.h"

KeyValue::KeyValue(int digit, const std::string &letters):
    m_Digit(digit),
    m_Letters(letters),
    m_Idx(0)
{
}

size_t KeyValue::sizeLetters() const
{
    return m_Letters.size();
}

char KeyValue::getChar(size_t pos) const
{
    return m_Letters[pos];
}

char KeyValue::getChar() const
{
    return m_Letters[m_Idx%m_Letters.size()];
}

void KeyValue::next()
{
    m_Idx++;
}

void KeyValue::reset()
{
    m_Idx = 0;
}
