#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    std::cout << " Enter the number:";
    std::cin >> a;
    while(a>=1)
    {
        b=b*a;
        a=a-1;

    }
    cout  << b<< endl;
    return 0;
}
