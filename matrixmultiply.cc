#include <iostream>
using namespace std;

//Write a 2x2 matrix class and write a function to multiply
//a matrix times a vector
//Matrix will be of [a b; c d] form - first row then second
struct matrix { double a; double b; double c; double d;};
struct vector { double x; double y;};

struct vector multiply(struct matrix m1, struct vector v1){
	struct vector multiply = {m1.a*v1.x+m1.b*v1.y, m1.c*v1.x+m1.d*v1.y}; 
	return multiply;
}

int main(){
	struct matrix m1;
	struct vector v1, v2;
	m1 = {1,1,1,1}; v1 = {1,1};
	v2 = multiply(m1, v1);
	cout << "["<< v2.x << "," << v2.y << "]" << endl;

return 0;
}