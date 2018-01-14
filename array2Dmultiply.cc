#include <iostream>
#include <cstdlib>
using namespace std;

//Write a function to multiply 2 matrices and store in 3rd
int multArr(int a[3][3], int b[3][3], int c[3][3], int rows,int cols)
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            int sum = 0;
            for (int k = 0; k < cols; k++)
            {
                sum = sum+a[i][k]*b[k][j];//matrix multiplication
            }
            c[i][j] = sum;
        }
    }
}

int main ()
{
    srand((unsigned)time(0));
    int rows = 3, cols = 3, a[rows][cols], b[rows][cols], c[rows][cols];
    int r1, r2;
    for ( int i = 0; i < rows; i++ ){
        for ( int j = 0; j < cols; j++ ) {
            a[i][j] = rand()%5;
            b[i][j] = rand()%5;
        }
    }
    multArr(a,b,c,rows,cols);
    cout << a[0][0] << " " << a[0][1] << " " << a[0][2] << endl;
    cout << a[1][0] << " " << a[1][1] << " " << a[1][2] << endl;
    cout << a[2][0] << " " << a[2][1] << " " << a[2][2] << endl;
    cout << b[0][0] << " " << b[0][1] << " " << b[0][2] << endl;
    cout << b[1][0] << " " << b[1][1] << " " << b[1][2] << endl;
    cout << b[2][0] << " " << b[2][1] << " " << b[2][2] << endl;
    cout << c[0][0] << " " << c[0][1] << " " << c[0][2] << endl;
    cout << c[1][0] << " " << c[1][1] << " " << c[1][2] << endl;
    cout << c[2][0] << " " << c[2][1] << " " << c[2][2] << endl;
}