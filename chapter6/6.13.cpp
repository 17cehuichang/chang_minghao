#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 0;
    double b = 0;

    std::cout << "Enter the number:";
    std::cin >> a;
     while(a!=0)
     {

     b= floor (a+0.5);

    cout << "The next number!" << b <<endl;
      std::cout << "Enter the number:";
    std::cin >> a;
     }

}
