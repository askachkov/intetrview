#include "integer.h"
#include <iostream>

static void log(const char * message)
{
    std::cout << "Obejct: [" << message << "]" << std::endl;
}

Integer::Integer(int32_t value)
{
    log("Integer Constructor");
    m_Value = value;
}

Object::String Integer::toString()
{
    return std::to_string(m_Value);
}

std::ostream& operator<< (std::ostream &out, const Integer &point)
{
    out << point.m_Value;
    return out;
}

std::istream& operator>> (std::istream &in, Integer &point)
{
    in >> point.m_Value;
    return in;
}
