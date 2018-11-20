#include <iostream>
using namespace std;

void v ( int );

int main()
{
   int side;
   cout << "Enter side: ";
   cin >> side;
   cout << endl;

   v ( side );
   cout << endl;
}
void v ( int side )
{

   for ( int o = 1; o <= side; o ++ )
   {
      for ( int c = 1; c <= side; c ++ )
         cout << '*';

      cout << endl;
}
}
