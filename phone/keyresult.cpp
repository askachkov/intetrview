#include "keyresult.h"

KeyResult::KeyResult(const std::vector<KeyValue> &keys):
    m_Keys(keys)
{
    int divs = 1;
    m_KeyDivs.resize(m_Keys.size());
    auto ri = m_KeyDivs.rbegin();
    for ( auto i = m_Keys.rbegin(); i != m_Keys.rend(); ++i, ri++ ){
        *ri = divs;
        divs *= i->sizeLetters();
    }
    m_TotalCombinations = divs;
}

size_t KeyResult::totalResults() const
{
    return m_TotalCombinations;
}

std::string KeyResult::getResult(int id) const
{
    std::string res;
    for ( int i = 0; i < m_Keys.size(); ++i ){
        int idx = id/m_KeyDivs[i]%m_Keys[i].sizeLetters();
        res.push_back( m_Keys[i].getChar(idx) );
    }
    return res;
}
