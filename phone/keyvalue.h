#ifndef KEYVALUE_H
#define KEYVALUE_H

#include <string>
#include <vector>

class KeyValue
{
    int         m_Digit;
    std::string m_Letters;
public:
    KeyValue(int digit = 0, const std::string & letters = "");
    size_t sizeLetters()const;
    char getChar(size_t pos)const;
};

#endif // KEYVALUE_H
