#include <iostream>
#include "integer.h"

using namespace std;

int main()
{
    {
        Integer o1, o4; // Default Ctor

        if ( true ){
            Integer o2(o1); // Copy Ctor
            o1 = move(o2); // Moev operator
        }

        if ( true ){
            Integer o3(move(o1)); // Move Ctor
            o4 = o3; // Copy operator
            cout << "Msg: " << o3.toString() << endl;
        }
    }


//Broken code below
//    Integer v1, v2, v3, v4;
//    v1 = 3;
//    v2 = v1 * 12;
//    v3 = v2 % 4;
//    cout << "V3: " << v3 << endl;
//    cout << "Enter v4 value: ";
//    cin >> v4;
//    if ( v4 < 34 ){
//        cout << "V4: " << v4 << endl;
//    } else {
//        cout << "V4: " << (v4%34) << endl;
//    }
    return 0;
}
