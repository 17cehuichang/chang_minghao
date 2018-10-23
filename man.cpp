#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;


int main()
{
    int binarysystem=0;
    int tensdigit=0;
    int a=1;
    int remainder=0;

    std::cout << "Enter the binary system:";
    std::cin >> binarysystem;
while (binarysystem>0)
{


    remainder=binarysystem%10;
    binarysystem=binarysystem/10;
    tensdigit=tensdigit+remainder*a;
    a=a*2;
}

    std::cout << "tens digit is"<< tensdigit<< std::endl;


    return 0;
}
