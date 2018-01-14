#include <iostream>
#include <cmath>
using namespace std;

//Return list of primes requested
bool isPrime(int i) //Check if number is prime
{
	if(i==1 || i==0)
		return false;
	if(i==2 || i==3)
		return true;
	int half=sqrt(abs(i)); //can stop checking divisibility
    int j = 2;             //at integer square root
	while(j <= half){      
		if(i%j == 0)       //check divisibility 
			return false;
		j++;
	}
	return true;
}

int prime(int i)
{
	int j = 0; //Counter for number of primes
	int k = 0; //Counter for integers checked
	while(j < i){
		if(isPrime(k)==1){
			cout << k << endl;
			j++; k++;
		}else{
			k++;
		}
	}
}

int main() {
	int num;
	cout << "How many primes do you want" << endl;
	cin >> num;
	prime(num);
	return 0;
}
