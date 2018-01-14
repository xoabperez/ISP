#include <iostream>
using namespace std;

//Recursive function for computing Fibonacci numbers
int fibo(int lim){
	if (lim == 1)
		return 1;
	if (lim == 0)
		return 1;
	else
		return fibo(lim-2)+fibo(lim-1);	//recursion formula
}

int main () {
	int limit;
	cout << "how many numbers of fibonacci?" << endl;
	cin >> limit;
  cout << fibo(limit) << endl;
}
