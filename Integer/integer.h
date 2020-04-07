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
    Integer(const Integer &value);
    Integer(Integer &&value);

    Integer &operator=(const Integer &value);
    Integer &operator=(Integer &&value);

    Integer &operator*(const Integer &value);
    Integer &operator/(const Integer &value);
    Integer &operator+(const Integer &value);
    Integer &operator-(const Integer &value);
    Integer &operator%(const Integer &value);

    bool operator<(const Integer &value);
    bool operator>(const Integer &value);
    bool operator==(const Integer &value);
    bool operator<=(const Integer &value);
    bool operator>=(const Integer &value);


    int32_t getValue()const;
    void seValue(int32_t value);

    std::string toString();

private:
    int32_t m_Value;
};

std::ostream &operator<<(std::ostream &os, const Integer& value);
std::istream &operator>>(std::istream &is, Integer& value);


#endif // INTEGER_H
