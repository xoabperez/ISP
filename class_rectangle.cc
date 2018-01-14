#include <iostream>
#include <cmath>
using namespace std;

//Make a class Rectangle (sides parallel to axes) with two constructors
//  two points, or point and width/height
//And functions for area, width, height
class point{
	public:
		float x,y;
		point(){};
		point(float ux, float uy){
			x = ux; y = uy;
		};
	float distance(point p2){
		return sqrt((x-p2.x)*(x-p2.x)+(y-p2.y)*(y-p2.y));
	};
};

class Rectangle{
	public:
		point bl, tr; float w,h;
		Rectangle(point p1, point p2){ //two points
			bl = p1; tr = p2;
			w = tr.x-bl.x;
			h = tr.y-bl.y;
		};
		Rectangle(point p1, float wid, float hei){
			w = wid; h = hei; //point & dimensions
		};
	float area(){
		return w*h;}
	float width(){
		return w;}
	float height(){
		return h;}
};

int main(){
	point p1(0,0), p2(2,2);
	Rectangle rect(p1,2,2);
	cout << "Area = " << rect.area() << endl;
	cout << "Width = " << rect.width() << endl;
	cout << "Height = " << rect.height() << endl;
}