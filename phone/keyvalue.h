#ifndef KEYVALUE_H
#define KEYVALUE_H

#include <string>
#include <vector>

class KeyValue
{
    int         m_Digit;
    std::string m_Letters;
    int         m_Idx;
public:
    KeyValue(int digit = 0, const std::string & letters = "");
    size_t sizeLetters()const;
    char getChar(size_t pos)const;
    char getChar()const;
    void next();
    void reset();
};

#endif // KEYVALUE_H
