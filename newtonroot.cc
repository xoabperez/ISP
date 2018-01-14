#include <iostream>
#include <cmath>
using namespace std;

//Use Newton method to square root
//Using pass by value
//x = sqrt(y) equivalent to finding zero of
//f(x) = x^2-y
//Numerically: x_next = x-f(x)/f'(x)
float newton(float y, float x){ //equation to minimize
	float f;
	f = x*x-y;
	return f;
}

float deriv(float x){ //f'(x)
	float d;
	d = 2*x;
	return d;
}

float nroot(float y){
	float root; 
	float x = 2; 
	while(abs(newton(y,x))>.00005){ //until solution within .00005
		x = x-newton(y,x)/deriv(x); //x_next
	}
	return x;
}

int main() {
	float y;
	cout << "Input y:" << endl;
	cin >> y;
	cout << nroot(y) << endl;
}