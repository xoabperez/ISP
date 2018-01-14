#include <iostream>
#include <cstdlib>
using namespace std;

//Write a function that creates a 100x100 identity matrix
int main(){
    int rows = 100, cols = 100, numbers[rows][cols];
    for ( int i = 0; i < rows; i++ )
        for ( int j = 0; j < cols; j++ ) {
            if(i==j){ //diagonal values 1
                numbers[i][j] = 1;
            }
            else{
                numbers[i][j] = 0;
            }
            cout << numbers[i][j] << endl;
        }
    return 0;
}