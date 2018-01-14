#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int a = *x;
    *x = *y;
    *y = a;
} 
int main(){
    int i=1, j=2;
    swap(&i,&j);
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    return 0;
}