#include <iostream>

using namespace std;

int main()
{
    unsigned int a=7;
    unsigned int *aPtr = &a;
    cout << "The value of a is"<<a << endl;
    cout << "The value of *a is"<<aPtr<<endl;

}
