#include <iostream>
using namespace std;

//Return the sum of squares using recursion
int ss(int num){
	if(num==1){
		return 1;
	}else{
		return num*num+ss(num-1); //Recursion formula
	}
}

int main(){
	int num; 
	for(num=1; num<=100; num++){
	cout << ss(num) << endl;
	}
}