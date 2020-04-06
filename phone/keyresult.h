#ifndef KEYRESULT_H
#define KEYRESULT_H

#include "keyvalue.h"

class KeyResult
{
    typedef std::vector<KeyValue> Keys;
    typedef std::vector<int> Divs;
    Keys m_Keys;
    Divs m_KeyDivs;
    size_t m_TotalCombinations;

public:
    KeyResult(const std::vector<KeyValue> & keys);
    size_t totalResults()const;
    std::string getResult(int id) const;
};

#endif // KEYRESULT_H
