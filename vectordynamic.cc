#include <iostream>
#include <cstdlib>
#include<vector>
using namespace std;

//Create a function that dynamically creates a vector that holds
//X random numbers
vector<int> array(size_t size){
    srand((unsigned)time(0));
    vector<int> X(size);
    for(int i = 0; i<size; i++){
        int random_integer = rand()%100;
        X[i] = random_integer;
    }
    return X;
}

int main(){

    size_t a = 10, b = 100, c = 1000;
    vector<int> X1 = array(a);
    for(int i=0; i<X1.size(); i++){
        cout << X1[i] << " ";
    }

}