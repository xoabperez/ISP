#include <iostream>
#include <sstream>
using namespace std;

//
int main() {	
	std::string saymany;
	int howmany;

	cout << "Input a number ";
	getline( cin,saymany ); //take input
	stringstream saidmany (saymany); //convert
	saidmany >> howmany; //store
	cout << howmany << endl;

  cout << "Input a number ";
	cin >> howmany; //Using cin

	cout << 3*howmany+1 << endl;
}