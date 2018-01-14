#include <iostream>
using namespace std;

//Check divisibility using function "isDivisor"
bool isDivisor(int i, int j)
{
	//TODO: something that returns a T or F if numbers are divisible
	if (i%j == 0)
		return true;
	else
		return false;
}

int main()
{
	int a, b;
	cout << "enter a number: ";
	cin >> a;
	cout << "enter another number: ";
	cin >> b;

	cout << a << " is ";

	if (isDivisor(b,a) == false)
	{
		cout << "not ";
	}

	cout << "a divisor of "<< b << endl;
}
/*
void helloworld(int n)
{
	for(int j=0; j<n; n++){
		cout << "Hello world" << endl;
	}
}
int main() 
{
	helloworld(3);
	return 0;
}
*/