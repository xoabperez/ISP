#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;

//Write a function to print out the digits of a number; 
//156 should print 'one five six'. Use a vector of strings
int main(){
    int number, i=1, power = 0;
    cout << "Give me a number " << endl;
    cin >> number;
    string numbers[10]{"zero", "one","two","three","four","five","six","seven","eight","nine"};
    while(number/pow(10,i)>1){//determine how many digits
        power++; i++;         //by dividing by 10^i
    }
    int array[power+1]; 
    for(int i = 0; i <= power; i++){ //separate digits
        int rem = number%10; //find last digit
        array[power-i] = rem; //store it
        number /= 10; //divide number by 10 (removing last digit)
    }
    for(int i = 0; i <= power; i++){ //
        cout << numbers[array[i]] << endl;
    }
}

