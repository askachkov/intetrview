
#include "integer.h"
#include <iostream>

using namespace std;

Integer::Integer(int32_t value)
{
    m_Value = value;
}
int32_t Integer::getValue() const
{
	return m_Value;
}

void Integer::setValue(int32_t value)
{
	m_Value=value;
}
Object::String Integer::toString()
{
	return to_string(m_Value);
}

ostream& operator<<(ostream &out, const Integer value)
{
    out << value.getValue();
    return out;
}

istream& operator>>(istream &input,Integer &value)
{
	int32_t inval;
	input >> inval;
	value.setValue(inval);
    return input;
}

Integer &Integer::operator* (const Integer &value)
{
	setValue(getValue()*value.getValue());
    return *this;
}

Integer &Integer::operator% (const Integer &value)
{
	setValue(getValue()%value.getValue());
    return *this;
}

bool Integer::operator< (const Integer &value)
{
	return (getValue() < value.getValue());
}

bool Integer::operator> (const Integer &value)
{
	return (getValue() > value.getValue());
}

bool Integer::operator<= (const Integer &value)
{
	return (getValue() <= value.getValue());
}

bool Integer::operator>= (const Integer &value)
{
	return (getValue() >= value.getValue());
}

bool Integer::operator== (const Integer &value)
{
	return (getValue() == value.getValue());
}

Integer &Integer::operator+ (const Integer &value)
{
	setValue(getValue()+value.getValue());
    return *this;
}
Integer &Integer::operator- (const Integer &value)
{
	setValue(getValue()-value.getValue());
    return *this;
}
Integer &Integer::operator/ (const Integer &value)
{
	setValue(getValue()/value.getValue());
	return *this;
}
