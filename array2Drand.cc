#include <iostream>
#include <cstdlib>
using namespace std;

//Write a program that creates a 2D array of 100 rows/cols with
//random integers
int main(){
    srand((unsigned)time(0));
    int rows = 100, cols = 100, numbers[rows][cols];
    for ( int i = 0; i < rows; i++ )
        for ( int j = 0; j < cols; j++ ) {
            int random_integer = rand()%10;
            numbers[i][j] = random_integer;
            cout << numbers[i][j]<< endl;
        }
    return 0;
}