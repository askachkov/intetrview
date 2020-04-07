#include "integer.h"
#include <iostream>
#include <sstream>
#include <algorithm>



Integer::Integer(int32_t value)
    :m_Value(value)
{

}

Integer::Integer(const Integer &value)
    :Object(value),
     m_Value(value.getValue())
{
}

Integer::Integer( Integer &&value)
    :Object(std::move(value)),
     m_Value(std::move(value.getValue()))
{
}

Integer &Integer::operator=(const Integer &value)
{
    m_Value = value.getValue();
    return  *this;
}

Integer &Integer::operator=(Integer &&value)
{
    std::cout << "Move operator" << std::endl;
    m_Value = std::move(value.getValue());
    return *this;
}

Integer &Integer::operator*(const Integer &value)
{
    int i = value.getValue() * m_Value;
    static Integer a(i);

    return a;
}

Integer &Integer::operator/(const Integer &value)
{
    int i = m_Value / value.getValue() ;
    static Integer a(i);

    return a;
}

Integer &Integer::operator+(const Integer &value)
{
    int i = m_Value + value.getValue() ;
    static Integer a(i);

    return a;
}

Integer &Integer::operator-(const Integer &value)
{
    int i = m_Value - value.getValue() ;
    static Integer a(i);

    return a;
}

Integer &Integer::operator%(const Integer &value)
{
    int i = m_Value % value.getValue();
    static Integer a(i);

    return a;
}

bool Integer::operator<(const Integer &value)
{
    return m_Value < value.getValue() ? true : false;
}

bool Integer::operator>(const Integer &value)
{
    if((*this < value) || (*this == value))
    {
        return false;
    }

    return true;
}

bool Integer::operator==(const Integer &value)
{
    return m_Value == value.getValue() ? true : false;
}

bool Integer::operator<=(const Integer &value)
{
    if((*this < value) || (*this == value))
    {
        return true;
    }

    return false;
}

bool Integer::operator>=(const Integer &value)
{
    return !(*this < value);
}

int32_t Integer::getValue() const
{
    return m_Value;
}

void Integer::seValue(int32_t value)
{
    m_Value = value;
}

std::string Integer::toString()
{
    std::stringstream ss;
    std::string str;
    ss << m_Value;
    ss >> str;

    return str;
}

std::ostream &operator<<(std::ostream &os, const Integer &value)
{
    return os<<value.getValue() << std::endl;
}

std::istream &operator>>(std::istream &is, Integer &value)
{
    int i;
    is >> i;
    value = i;
    return is;
}
