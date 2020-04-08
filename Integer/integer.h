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
    Integer operator +(const Integer &other);
    Integer operator -(int x);
    Integer operator /(int x);
    Integer operator *(int32_t x);
    Integer operator %(int32_t x);
    bool operator <(int32_t x);
    bool operator >(const Integer &other) const;
    bool operator <(const Integer &other) const;
    bool operator >=(const Integer &other) const;
    bool operator <=(const Integer &other) const;
    bool operator ==(int x);
    friend std::ostream& operator<< (std::ostream &stream, const Integer &x);
    friend std::istream& operator>> (std::istream &stream, Integer &x);
    String toString();
private:
    int32_t m_Value;
};

std::ostream& operator<< (std::ostream &stream, const Integer &x);
std::istream& operator>> (std::istream &stream, Integer &x);
#endif // INTEGER_H
