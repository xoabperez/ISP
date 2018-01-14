#include <iostream>
using namespace std;

//Return remainder of division calculation
bool divrem(int num, int div, int &rem){
	if(num%div==0){ 
		return true;
	}else{
		rem = num%div;
		return false;		
	}
}

int main(){
	int num,div,rem=0;
	cout << "integer to check for divisibility" << endl;
	cin >> num;
	cout << "integer to divide by" << endl;
	cin >> div;

	if (divrem(num,div,rem)==1){
		cout << num << " is divisible by " << div << endl;
	}else{
	cout << num << "/" << div << " has remainder " << rem << endl;
	}	
}