#ifndef INTEGER_H
#define INTEGER_H

#include "object.h"
#include <cstdint> // C++ analog of stdint.h

class Integer:
        public Object
{
public:
    Integer(int32_t value = 0); // Default Ctor + Ctor with value

    Integer operator*(const int & a);
    Integer operator%(const int & a);
    Integer operator+(const int & a);
    Integer operator-(const int & a);


    Integer operator-(const  Integer& val);
    Integer operator+(const  Integer& val);
    Integer operator/( const  Integer& val);
    bool operator==( const  Integer& val);

    bool operator<(const int & a);
    bool operator==(const int & a);

    bool operator<(const  Integer& a );
    bool operator<=(const  Integer& a);
    bool operator>=(const  Integer& a);
    bool operator>(const  Integer& a);

    int32_t get_Value() const;
    void set_Value(int32_t& value);

    std::string toString();

    void Print();

    ~Integer();


private:
    int32_t m_Value;
};


std::ostream& operator<<(std::ostream &out, const Integer &a);
std::istream& operator>>(std::istream &in, Integer &a);

#endif // INTEGER_H
