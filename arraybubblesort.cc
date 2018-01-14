#include <iostream>
#include <cstdlib>
using namespace std;

//Write a function that will sort your randomly generated array from
//small to large by traversing array and swapping values of adjacent
//indices if a[i]>a[i+1]
void bubble(int arr[], int size, int &run){ 
    bool j = false; 
    for(int k=0; k<size; k++){ //go through each value of array
        if(arr[k]==arr[k+1]){
            break;
        }
        else if(arr[k]>arr[k+1]){ // if number is greater than next
            int a = arr[k]; // store larger number 
            arr[k] = arr[k+1]; //replace larger number with smaller
            arr[k+1] = a; //replace smaller with larger
            j = true; //a switch took place
        }
    }
    run++;
    if(j){
        bubble(arr,size,run); //check if sorted
    }
}

int main(){
    srand((unsigned)time(0));
    int size = 10, numbers[size], runs = 0; //initialize array/count
    for(int i = 0; i<size; i++){
        int random_integer = rand()%100;
        numbers[i] = random_integer; //populate array
        cout << numbers[i] << endl;
    }
    bubble(numbers, size, runs); //sort and count how many traversals
    cout << "New array " << endl;
    for(int i = 0; i<size; i++){
        cout << numbers[i] << endl;
    }
    cout << "It took " << runs << " runs" << endl;
}