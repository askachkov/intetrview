#ifndef INTEGER_H
#define INTEGER_H

#include "object.h"
#include <cstdint> // C++ analog of stdint.h

class Integer:
        public Object
{
public:
    Integer(int32_t value = 0); // Default Ctor + Ctor with value
    Integer &operator* (const Integer &value);
    Integer &operator% (const Integer &value);
    bool operator< (const Integer &value);
    bool operator> (const Integer &value);
    bool operator<= (const Integer &value);
    bool operator>= (const Integer &value);
    bool operator== (const Integer &value);
    Integer &operator+ (const Integer &value);
    Integer &operator- (const Integer &value);
    Integer &operator/ (const Integer &value);

    int32_t getValue() const;
    void setValue(int32_t value);
    Object::String toString();
private:
    int32_t m_Value;
};


std::ostream& operator<<(std::ostream &out, const Integer value);
std::istream& operator>>(std::istream &input,Integer &value);

#endif // INTEGER_H
