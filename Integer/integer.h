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
    virtual String toString();
    Integer operator *(const Integer& a) const {
        return (a.m_Value * m_Value);
    }
    Integer operator %(const Integer& a) const {
        return (a.m_Value % m_Value);
    }
    Integer operator /(const Integer& a) const {
        return (this->m_Value / a.m_Value);
    }
    Integer operator +(const Integer& a) const {
        return (a.m_Value + m_Value);
    }
    Integer operator -(const Integer& a) const {
        return (this->m_Value - a.m_Value);
    }
    bool operator <(const Integer& a) const {
        return (a.m_Value > m_Value);
    }
    bool operator ==(const Integer& a) const {
        return (a.m_Value == this->m_Value);
    }
    bool operator >(const Integer& a) const {
        return (a.m_Value < m_Value);
    }
    bool operator <=(const Integer& a) const {
        return (a.m_Value >= m_Value);
    }
    bool operator >=(const Integer& a) const {
        return (a.m_Value <= m_Value);
    }
    int32_t getValue() {return m_Value;}
    friend std::ostream& operator<< (std::ostream &out, const Integer &point);
    friend std::istream& operator>> (std::istream &in, Integer &point);
private:
    int32_t m_Value;
};

#endif // INTEGER_H
