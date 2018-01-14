#include <iostream>
#include <cmath>
using namespace std;

//Make a class LinearFunction with a constructor
//  LinearFunction(point input_p1, point input_p2)
//And function evaluate_at
class point{
	public:
		float x,y;
		point(){}; //Polymorphism; different types based on input
		point(float ux, float uy){
			x = ux; y = uy;
		};
	float distance(point p2){
		return sqrt((x-p2.x)*(x-p2.x)+(y-p2.y)*(y-p2.y));
	};
};

class LinearFunction{
	public:
		point pa, pb; float m, b;
		LinearFunction(point p1){ //Line through origin
			pa = p1; 
			m = pa.y-pa.x;
			b = 0;
		};
		LinearFunction(point p1, point p2){ //Line through points
			pa = p1; pb = p2;
			m = (pb.y-pa.y)/(pb.x-pa.x);
			b = pb.y-m*pb.x;
		};
	float evaluate_at(float x){
		return m*x+b;
	};
};

int main(){
	point p1(0,0), p2(1,1);
	LinearFunction line(p1,p2);
	cout << line.evaluate_at(4.0) << endl;
}