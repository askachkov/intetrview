
#include "integer.h"

Integer::Integer(int32_t value)
{
    m_Value = value;
}

Integer Integer::operator*(const Integer& var)
{
    return Integer(m_Value * var.m_Value);
}

Integer Integer::operator%(const Integer& var)
{
    return Integer(m_Value % var.m_Value);
}

bool Integer::operator < (const Integer& var)
{
    return m_Value < var.m_Value;
}
