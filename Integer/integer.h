#ifndef INTEGER_H
#define INTEGER_H

#include "object.h"
#include <cstdint> // C++ analog of stdint.h
#include <iostream>

class Integer:
        public Object
{
public:
    Integer(int32_t value = 0); // Default Ctor + Ctor with value

    Integer operator * (const Integer& var);
    Integer operator % (const Integer& var);
    bool operator < (const Integer& var);

    Object::String toString()
    {
        return std::to_string(m_Value);
    }

    friend std::ostream& operator<<(std::ostream& os, const Integer& var)
    {
        return os << var.m_Value;
    }

    friend std::istream& operator>>(std::istream& is, Integer& var)
    {
        is >> var.m_Value;
        return is;
    }

private:
    int32_t m_Value;
};

#endif // INTEGER_H
