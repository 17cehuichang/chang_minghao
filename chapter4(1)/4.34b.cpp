#include <iostream>

using namespace std;

int main()
{
    double  e = 1;
    double a = 0;
    double b =1;
    double c = 1;

    std::cout << "Enter the number:";
    std::cin >> a ;

     while(c<=a)
    {
        b=b*c;
        e=e+1/b;
        c=c+1;
}

    cout << e << endl;
    return 0;
}
