#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b =0;
    double c =0;

     std::cout << "Enter the number1:";
     std::cin >> a ;
     std::cout << "Enter the number2:";
     std::cin >> b ;
       c=b%a;
   cout << c<<endl;
     if( c==0 )
      {

       cout << "true" <<endl;
      }
    else
        cout << "false" <<endl;


    return 0;
}
