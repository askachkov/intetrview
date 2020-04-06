#include "keyvalue.h"

KeyValue::KeyValue(int digit, const std::string &letters):
    m_Digit(digit),
    m_Letters(letters)
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
