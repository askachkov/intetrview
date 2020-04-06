#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "keyvalue.h"
#include "keyresult.h"

class KeyBoard
{
    KeyValue keys[10];

public:
    KeyBoard();
    KeyResult getAllResults( const std::vector<int> & digits )const;
    std::string getSingleResult( const std::vector<int> & digits )const;
};

#endif // KEYBOARD_H
