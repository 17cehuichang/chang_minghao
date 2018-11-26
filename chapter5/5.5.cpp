#include <iostream>

using namespace std;

int main()
{
    int a =0;
    int b =0;
    int c =0;
    int d =0;

    std::cout << "Enter the number:"  ;
    std::cin >> a;


    for(b=0;b<a;b++)
    {
    std::cout << "Enter add number:" ;
    std::cin >> c;
    d=d+c;
    }

    cout << d << endl;
    return 0;
}
