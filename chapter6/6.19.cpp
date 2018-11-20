#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double hypotenuse( double, double );

int main()
{
   double a;
   double b;

   cout << fixed;


   for ( int i = 1; i <= 3; i++ )
   {
      cout << "\nEnter 2 sides of right triangle: ";
      cin >> a >> b;

    double hypotenuse;
     hypotenuse=a*a+b*b;
      cout << "Hypotenuse:  " << setprecision( 1 )
         << hypotenuse << endl;



   }

}





