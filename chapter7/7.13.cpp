#include <iostream>
#include <array>

using namespace std;

int main()
{
    int b=0;
    array<int,20>a={};
    for(size_t i=0;i<20;++i)
       {
        cin>>b;
        if(b!=a[i-1])
            a[i]=b;
       }
       for( int ac:a)
        cout << ac << " ";
    cout <<   endl;

}
