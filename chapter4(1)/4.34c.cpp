#include <iostream>

using namespace std;

int main()
{
    double  e = 1;
    double a = 0;
    double b =1;
    double c = 1;
    double x;

    std::cout << "Enter the number:";
    std::cin >> a ;
    std::cout << "Enter the number:";
    std::cin >> x ;

     while(c<=a)
    {
        b=b*c;
        e=e+x/b;
        c=c+1;
}

    cout << e << endl;
    return 0;
}
