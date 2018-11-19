#include <iostream>

using namespace std;

int main()
{
    int a =0;
    int b =0;
    int c =0;
    int d =0;
    std::cout << "Enter the number1:";
    std::cin >> a;
    std::cout << "Enter the number2:";
    std::cin >> b;
    std::cout << "Enter the number3:";
    std::cin >> c;
    if(a>b)
        a=a;
    else
        {
        d=a;
        a=b;
        b=d;
        }
    if(a>c)
            a=a;
        else
           {

            d=a;
            a=c;
            c=d;
           }

    if(a*a==b*b+c*c)

    cout << "shizhijiaosanjiaoxing" << endl;
    else
        cout << " bushi" <<endl;
    return 0;
}
