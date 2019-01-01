#include <iostream>
using namespace std;

double pai = 3.14159;


inline double circleArea( double r )
{
   return pai * r * r;
}

int main()
{
   double radius;

   cout << "Enter the radius of the circle: ";
   cin >> radius;

   cout << "The area of the circle is " << circleArea( radius ) << endl;
}
