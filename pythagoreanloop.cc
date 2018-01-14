#include <iostream>
using namespace std;

//Conditionals
int main () {

int u,v,w;

for (u=1; u<100; u++){
	for (v=u; v<100; v++){
		for (w=1; w<100; w++) {
			if (u*u+v*v==w*w){ //Check if u^2+v^2=w^2
					cout << u << "^2+" << v << "^2=" << w << endl;
			}
		}
	}
}

return 0;
}
