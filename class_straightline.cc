#include <iostream>
#include <cmath>
using namespace std;

//For linearfunction class, add slope and intercept, and generalize
//to StraightLine class. Slope/intercept do not apply to vertical 
//lines, so design SL so that it stores defining points internally.
//Let LinearFunction inherit
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

class StraightLine{
    point pa, pb; float m, b;
		StraightLine(point p1){ 
			pa = p1;
            if(pa.x == 0) {
                cout << "This is a vertical line" << endl;
                m = 0; b = 0;
            }
            else{
                m = pa.y-pa.x;
                b = 0;
            }
		};
        StraightLine(point p1, point p2){
			pa = p1; pb = p2;
            if(pa.x == pb.x){
                cout << "This is a vertical line" << endl;
                m = 0; b = 0;
            }
            else{
                m = (pb.y-pa.y)/(pb.x-pa.x);
                b = pb.y-m*pb.x;
            }
			
		};
};

class LinearFunction{
	public:
		
	float evaluate_at(float x){
		return m*x+b;
	};
    float slope(){
        return m;
    };
    float intercept(){
        return b;
    };
};

int main(){
	point p1(0,0), p2(1,1);
	LinearFunction line(p1,p2);
	cout << line.evaluate_at(4.0) << endl;
}