#include <iostream>
#include <cstdlib>
using namespace std;

int main () { 
    int a[3][4] = {
    {0, 1, 2, 3} , /* initializers for row indexed by 0 */
    {4, 5, 6, 7} , /* initializers for row indexed by 1 */
    {8, 9, 10, 11} /* initializers for row indexed by 2 */
    };
    for ( int i = 0; i < 3; i++ )
        for ( int j = 0; j < 4; j++ ) {
            cout << "a[" << i << "][" << j << "]: ";
            cout << a[i][j]<< endl;
        }
    return 0;
}

int main () {
    int a[3][4];
    for ( int i = 0; i < 3; i++ )
        for ( int j = 0; j < 4; j++ ) {
            a[i][j] = i+j;
        }
    for ( int i = 0; i < 3; i++ )
        for ( int j = 0; j < 4; j++ ) {
            cout << "a[" << i << "][" << j << "]: ";
            cout << a[i][j]<< endl;
        }
    return 0;
}