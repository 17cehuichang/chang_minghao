#include <iostream>

using namespace std;

int main()
{
    int a =0;
    double b = 0;

    std::cout << "Enter the number:";
    std::cin >> a;

    b = a%2;
    if(b==0)
        cout << "true"<< endl;
    else
        cout << "false"<<endl;


    return 0;
}
