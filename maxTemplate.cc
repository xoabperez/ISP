/****************************************************
 *
 *  FileName:    maxTemplate.cpp
 *  Purpose:     Demonstrate the use of function templates
 *
 ********************************************************/
#include <iostream>
#include <string>
using namespace std;

//Make a template out of this function. Don't forget the return type.
template <class T>
T myMax(T one, T two)
{
   T bigger;
   if (one < two)
   {
      bigger = two;
   }
   else
   {
      bigger = one;
   }
   return bigger;
}

int main()
{
   int i_one = 3, i_two = 5;
   double a = 3.14159, b = 2.778;
   string s1 = "oranges", s2 = "apples";

   cout << "The max of " << i_one << " and " << i_two << " is "
	<< myMax(i_one, i_two) << endl;

   //Test your template on float and string types
	cout << "The max of " << a << " and " << b << " is "
	<< myMax(a, b) << endl;
    cout << "The max of " << s1 << " and " << s2 << " is "
	<< myMax(s1, s2) << endl;
   return 0;
}