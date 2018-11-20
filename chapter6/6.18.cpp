#include <iostream>

using namespace std;

int main()
{
    double exponent = 0;
    int base=0;
    int integerpower=1;



    std::cout << "Enter the base:"<<endl;
    std::cin >>base;
     std::cout << "Enter the exponent:"<<endl;
    std::cin >>exponent;

    cout << "integerPower(a,b)" << endl;

    while (exponent>=1)
        {
            integerpower=integerpower*base;
         exponent=exponent-1;
        }

        cout << "integerpower is" <<integerpower<<endl;


    return 0;
}
