#include <iostream>

using namespace std;

int main()
{
    int a =0;
    int b =0;
    int c =0;
    int d =0;
    int e =0;

    std::cout << "Enter the number:"  ;
    std::cin >> a;

     e=a;
    for(b=0;b<e;b++)
    {
    std::cout << "Enter add number:" ;
    std::cin >> c;
    a=a<c?a:c;

    }

    cout << a << endl;
    return 0;
}
