#include <iostream>
using namespace std;

//Multiply an array by a constant
int multiplyByC(int arr[][4], int rows,int cols, int C)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] *= C;
        }
    }
    return 0;
}
int main ()
{
    int a[3][4];
    for ( int i = 0; i < 3; i++ )
        for ( int j = 0; j < 4; j++ )
            a[i][j] = i+j;
    multiplyByC(a, 3, 4, 5);
    for ( int i = 0; i < 3; i++ )
        for ( int j = 0; j < 4; j++ ) {
            cout << a[i][j]<< endl;
    }
    return 0;
}