#include <iostream>
using namespace std;

int power( int, int );

int main()
{
   int b;
   int e;

   cout << "Enter a and b: ";
   cin >> b >> e;

   cout << b << " raised to the " << e << " is " << power( b, e ) << endl;
}

 int power( int base, int exponent )
{
   if ( exponent == 1 )
      return base;
   else
      return base * power( base, exponent - 1 );
}
