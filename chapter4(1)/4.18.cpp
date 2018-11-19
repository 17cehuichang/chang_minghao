#include <iostream>

using namespace std;

int main()
{
    int l = 0;
    int m = 0;
    int n = 0;
    int o = 0;
    cout <<"N\t10*N\t100*N\t1000*N"<<endl;
    while(l<5)
    {   l=l+1;
        m=10*l;
        n=100*l;
        o=1000*l;

        cout <<l<<"\t"<<m<<"\t"<<n<<"\t"<<o<<"\t"<<endl;
    }


    return 0;
}
