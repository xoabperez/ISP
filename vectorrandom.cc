#include <iostream>
#include <cstdlib>
#include<vector>
using namespace std;

//Create a vector that holds 100 random numbers
int main(){
    srand((unsigned)time(0));
    int size = 100;
    vector<int> array(size);
    for(int i = 0; i<size; i++){
        int random_integer = rand()%100;
        array[i] = random_integer;
        cout << array[i] << endl;
    }

}