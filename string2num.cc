#include <iostream>
#include <sstream>
using namespace std;

//Inputs and Outputs
int main() {	
	std::string number1,number2;

	int n1,n2,mod;

	cout << "Input first number ";
	getline( cin,number1 ); //take input number as string
	stringstream snumber1 (number1); //convert
	snumber1 >> n1; //store number

	cout << "Input second number ";
	getline( cin,number2 );
	stringstream snumber2 (number2);
	snumber2 >> n2;

	mod = n1-n2*(n1/n2); //remainder
	cout << mod << endl;
	cout << n1%n2 << endl; //compare methods

}