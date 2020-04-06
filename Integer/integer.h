#ifndef INTEGER_H
#define INTEGER_H

#include "object.h"
#include <cstdint> // C++ analog of stdint.h

class Integer:
        public Object
{
public:
    Integer(int32_t value = 0); // Default Ctor + Ctor with value

private:
    int32_t m_Value;
};

#endif // INTEGER_H
