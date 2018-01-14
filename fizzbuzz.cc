#include <iostream>
using namespace std;

//Conditionals
int main () {
	int read;
	cout << "give me a number yo" << endl;
	cin >> read;
	//Check if divisible by both 3 and 5, just 3, or just 5 (order is important)
	if (read%3 == 0 && read%5 == 0) {
	cout << "FizzBuzz" << endl;
	} else if (read%3 ==0) {
	cout << "Fizz" << endl;
	} else if (read%5 ==0) {
	cout << "Buzz" << endl;
	} else {
  }
	return 0;
}