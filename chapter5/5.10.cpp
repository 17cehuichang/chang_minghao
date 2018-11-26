#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int b = 1;
    int c =0;
    cout << "Number" <<setw(15) << "Factorial"<<endl;
       for(unsigned int a=1;a<=5;++a)
    {
        c=a;
        b=1;
         while(c>=1)
    {
        b=b*c;
        c=c-1;


    }

        cout << setw(4) << a << setw(15) << b <<endl;
        }


}
