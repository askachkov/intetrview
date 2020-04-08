
#include "integer.h"
Integer::Integer(int32_t value)
{
    m_Value = value;
}

Integer Integer::operator +(const Integer &other)
{
    return Integer(this->m_Value + other.m_Value);
}

Integer Integer::operator -(int x)
{
    return Integer(this->m_Value - x);
}

Integer Integer::operator /(int x)
{
    return Integer(this->m_Value / x);
}

Integer Integer::operator *(int32_t x)
{
    return Integer(m_Value * x);
}

Integer Integer::operator %(int32_t x)
{
    return Integer(m_Value % x);

}

bool Integer::operator <(int32_t x)
{
    return this->m_Value < x;
}

bool Integer::operator >(const Integer &other) const
{
    return this->m_Value > other.m_Value;
}

bool Integer::operator <(const Integer &other) const
{
    return this->m_Value < other.m_Value;
}

bool Integer::operator >=(const Integer &other) const
{
    return this->m_Value >= other.m_Value;
}

bool Integer::operator <=(const Integer &other) const
{
    return this->m_Value <= other.m_Value;
}

bool Integer::operator ==(int x)
{
    return this->m_Value == x;
}

Object::String Integer::toString()
{
    return std::to_string(m_Value);
}


std::istream &operator>>(std::istream &stream, Integer &x)
{
    stream >> x.m_Value;
    return stream;
}

std::ostream &operator<<(std::ostream &stream, const Integer &x)
{
    stream << x.m_Value;
    return stream;
}
