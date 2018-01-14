#include <iostream>
#include <cmath>
using namespace std;

//Swap the values of two variables
//Using pass by reference
void swap(int &x,int &y){
	int a = x; //dummy variable
	x = y;
	y = a;
}

int main() {
	int x, y;
	cout << "Input x" << endl;
	cin >> x;
	cout << "Input y" << endl;
	cin >> y;
	swap(x,y);
	cout << "x is now " << x << endl;
	cout << "y is now " << y << endl;
}