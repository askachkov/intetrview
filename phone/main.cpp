#include <iostream>
#include "keyboard.h"

using namespace std;

/**
 *      1[    ] 2[abc ] 3[def ]
 *      4[ghi ] 5[jkl ] 6[mno ]
 *      7[pqrs] 8[tuv ] 9[wxyz]
 *      *[    ] 0[_   ] #[    ]
 *
 */

int main()
{
    KeyBoard board;
    KeyResult res = board.getAllResults( {2,2,0,3,7} );
    cout << res.totalResults() << endl;

    for ( int i = 0; i < res.totalResults(); ++i ){
        cout << res.getResult(i) << endl;
    }

    cout << board.getSingleResult({2,2,0,3,4} ) << endl;

    return 0;
}
