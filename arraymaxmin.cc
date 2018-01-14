#include <iostream>
#include <cstdlib>
using namespace std;

//Write a program that creates an array of 100 random integers
//Write 2 functions that take an array as an argument
// - one finds the max value and index
// - one finds the minimum value and index

double getMax(int arr[], int size, int &maxIndex){
    int max = arr[0]; //initialize as first number
    for(int i = 1; i < size-1; i++){ //go through array comparing
        if(arr[i] > max){ 
            max = arr[i]; //replace
            maxIndex = i;
        }
    }
    return max;
}
double getMin(int arr[], int size, int &minIndex){
    int min = arr[0];
    for(int i = 1; i < size-1; i++){
        if(arr[i] < min){
            min = arr[i];
            minIndex = i;
        }
    }
    return min;
}

int main(){
    srand((unsigned)time(0));
    int size = 100, minIndex = 0, maxIndex = 0, max, min;
    int numbers[size]; //create array
    for(int i = 0; i<size; i++){
        int random_integer = rand()%100;
        numbers[i] = random_integer; //populate array
        cout << numbers[i] << endl;
    }
    max = getMax(numbers, size, maxIndex);
    min = getMin(numbers, size, minIndex);
    cout << "Max is " << max << " Located at " << maxIndex << endl;
    cout << "Min is " << min << " Located at " << minIndex << endl;
    
}