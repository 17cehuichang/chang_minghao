#include <iostream>
#include <array>

using namespace std;

int main()
{
    const size_t counts = 10;
    int b=0;
    array< int, counts > a = { 10, 20, 30,40 ,50,60,70,80,90,100};
    for ( size_t i=0; i < a.size(); i++)
      {

      a[i]=0;
     b=a[i];}
    cout << "\ncounts\n" << b <<endl;
    return 0;
}
