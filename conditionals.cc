#include <iostream>
using namespace std;

//Conditionals
int main () {

  int n1,n2;
  cout << "number 1 please" << endl;
  cin >> n1;
  cout << "number 2 please" << endl;
  cin >> n2;

  if (n1%n2 == 0) {
  cout << n2 << " is a divisor of " << n1 << endl; }
  else {
  cout << n2 << " is not a divisor of " << n1 << endl; }
 
return 0;
}
