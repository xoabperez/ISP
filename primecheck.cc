#include <iostream>
#include <cmath>
using namespace std;

//Check if number is prime
bool isPrime(int i)
{
	int j = 2;

	if(i==1 || i==0)
		return false; //1,0 not prime by def
	int roo=sqrt(abs(i));  //only go until square root; after this, must be prime

	while(j <= roo) {
		if(i%j == 0) 
			return false;
		j++;
	}
	return true;
}

int main() {
	int num;
	cout << "Give me a number to check" << endl;
	cin >> num;
	cout << isPrime(num) << endl;
}
