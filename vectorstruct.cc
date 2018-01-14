#include <iostream>
using namespace std;

//Define a structure for a vector in R^2
//Create inner product function for two vectors

struct vector { double x; double y; }; //2x1 vector of doubles

double inner_product(struct vector p1, struct vector p2){
	double inner_product = p1.x*p2.x+p1.y*p2.y; //inner product
	return inner_product;
}

int main(){
	struct vector p1,p2;
	p1 = {0.5,3.0}; p2 = {3,0};
	cout << inner_product(p1,p2) << endl;

return 0;
}