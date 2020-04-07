#include "integer.h"
#include <iostream>
#include <string.h>

Integer::Integer(int32_t value)
{
    m_Value = value;
}

Integer::~Integer()
{
    std::cout<<"destructor Integer" <<std::endl;
};

 std::string Integer::toString()
 {
     return std::to_string(m_Value);
 }

Integer Integer::operator+(const int & a)
{
    return this->m_Value + a;
}

Integer Integer::operator-(const int & a)
{
    return this->m_Value - a;
}


Integer Integer::operator*(const int& a)
{
    return this->m_Value * a;
}

Integer Integer::operator%(const int & a)
{
    return this->m_Value % a;
}

std::ostream& operator<<(std::ostream &out, const Integer& a)
{
    out << a.get_Value();
    return out;
}


std::istream& operator>>(std::istream &in, Integer& a)
{
    int32_t temp;
    in >> temp;
    a.set_Value(temp);
    return in;
}

Integer Integer::operator-(const  Integer& val)
{
    return this->m_Value - val.m_Value;
}

Integer Integer::operator+(const  Integer& val)
{
    return this->m_Value + val.m_Value;
}

Integer Integer::operator/(const  Integer& val)
{
    return this->m_Value / val.m_Value;
}

bool Integer::operator==(const  Integer& val)
{
    return this->m_Value == val.m_Value;
}


bool Integer::operator<(const int & a)
{

    return this->m_Value < a;
}

bool Integer::operator==(const int & a)
{
    return this->m_Value == a;
}

bool Integer::operator<(const  Integer& a )
{
    return this->m_Value < a.m_Value;
}

bool Integer::operator<=(const  Integer& a )
{
    return this->m_Value <= a.m_Value;
}

bool Integer::operator>=(const  Integer& a)
{
    return this->m_Value >= a.m_Value;
}

bool Integer::operator>(const  Integer& a)
{
    return this->m_Value > a.m_Value;
}

int32_t Integer::get_Value() const
{
    return m_Value;
}
void Integer::set_Value(int32_t& value)
{
    m_Value = value;
}

void Integer::Print()
{
    std::cout<< "Print " << this->m_Value << std::endl;
}
