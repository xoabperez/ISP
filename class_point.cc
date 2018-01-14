#include <iostream>
#include <cmath>
using namespace std;

//Make class Point with a constructor
//  point(float x coordinate, float y coordinate)
//And function distance ('method')
class point{
	private:
		float ux,uy;
	public:
		point(float x, float y){
			ux = x; uy = y;
		};
	float x() {return ux;}; //return x coord
	float y() {return uy;}; //return y coord
	float distance(point p2){ //distance between points
		return sqrt((ux-p2.ux)*(ux-p2.ux)+(uy-p2.uy)*(uy-p2.uy));
	};
};

int main(){
	point p1(0,0), p2(1,1);
	cout << p1.distance(p2) << endl;
}