#include "keyboard.h"

KeyBoard::KeyBoard()
{
    keys[0] = KeyValue(0, " ");
    keys[1] = KeyValue(1, "");
    keys[2] = KeyValue(2, "abc");
    keys[3] = KeyValue(3, "def");
    keys[4] = KeyValue(4, "ghi");
    keys[5] = KeyValue(5, "jkl");
    keys[6] = KeyValue(6, "mno");
    keys[7] = KeyValue(7, "pqrs");
    keys[8] = KeyValue(8, "tuv");
    keys[9] = KeyValue(9, "wxyz");
}

KeyResult KeyBoard::getResult(const std::vector<int> &digits) const
{
    std::vector<KeyValue> values;
    for ( auto i = digits.begin(); i != digits.end(); ++i ){
        values.push_back( keys[*i] );
    }
    return KeyResult(values);
}
