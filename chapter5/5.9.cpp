#include <iostream>

using namespace std;

int main()
{
    int b=1;
    for(unsigned int a=1;a<=15;a++)
       {

       if(a%2!=0)
        b=b*a;
       }


    cout << b << endl;
    return 0;
}
