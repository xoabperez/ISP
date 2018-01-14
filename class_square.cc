#include <iostream>
#include <cmath>
using namespace std;

//Make a class Square that inherits from Rectangle
//Should have function area defined
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
		point bl; float w,h;
		Rectangle(){};
        Rectangle(point p1, float wid, float hei){
			w = wid; h = hei;
		};
	float area(){
		return w*h;}
	float width(){
		return w;}
	float height(){
		return h;}
};

class Square : public Rectangle {
    public:
        Square(point p1, float wid){
            w = wid; h = wid;
        }
    
};

int main(){
	point p1(0,0); 
	Square sq(p1,2);
	cout << "Area = " << sq.area() << endl;
	cout << "Width = " << sq.width() << endl;
	cout << "Height = " << sq.height() << endl;
}