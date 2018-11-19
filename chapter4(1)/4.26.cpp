#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int a =0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;


    cout << "Enter the number"   ;
    cin >> number;
    a = number%10;
    number = number/10;
    b = number%10;
    number = number/10;
    c = number%10;
    number = number/10;
    d = number%10;
    number = number/10;
    e = number %10;
    if(b==d)
    {

      if(a==e)
      cout << "huiwen"<<endl;
      else
        cout << "bushi"<<endl;
    }

    else
        cout << "bushi"<<endl;


    return 0;
}

