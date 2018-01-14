#include <iostream>
#include <iomanip>
using namespace std;

//Output numbers in base 16, nicely formatted
int main()
{
	cout << setbase(16) << setfill('0'); //00 01...0e 0f
	for (int i=0; i<16; i++) { //
		for (int j=0; j<16; j++)
            //pad with empty spaces on right
			cout << right << setw(2) << i*16+j << " ";
	cout << endl;
	}

}