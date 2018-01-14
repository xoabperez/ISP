#include <iostream>
#include <cstdlib>
using namespace std;

//Write a function that takes an array and 2 index locations
//and swaps the values of the array at the 2 index locations
void swap(int arr[], int ind1, int ind2){
    int a = arr[ind1];
    arr[ind1] = arr[ind2];
    arr[ind2] = a;
}

int main(){
    srand((unsigned)time(0));
    int size = 5, ind1 = 0, ind2 = 1, numbers[size];
    for(int i = 0; i<size; i++){
        int random_integer = rand()%100;
        numbers[i] = random_integer;
        cout << numbers[i] << endl;
    }
    swap(numbers, ind1, ind2);
    cout << "1st number is " << numbers[ind1] << endl;
    cout << "2nd number is " << numbers[ind2] << endl;
}