#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int c=0;
    int b=1;
   double d =0;
    std::cout << "Enter the number: ";
   std::cin >> a;
while (a!=9999)

   {
    c=c+a;
    d=c/b;
    b++;
   std::cout << "Enter the number: ";
   std::cin >> a;

   }

    cout << d;



}
