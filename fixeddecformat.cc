#include <iostream>
#include <iomanip>
using namespace std;

//Use integer output to print fixed point numbers aligned on dec
//Use four spaces for both the integer and fractional part
int main()
{
	float a = 1.345, b = 23.789, c = 456.1234;
	cout << fixed; 
    //total width 10; four spaces each
	cout << setw(10) << setprecision(4) << a << endl;
	cout << setw(10) << setprecision(4) << b << endl;
	cout << setw(10) << setprecision(4) << c << endl;
}