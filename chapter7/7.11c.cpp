#include <iostream>
#include <array>

using namespace std;

int main()
{

    array < double, 12> monthlyTemperatures={};
    for ( int i =0;i<12;i++)
        cin >> monthlyTemperatures[i];
    for ( int a :monthlyTemperatures)
        cout << a << " ";
    cout   << endl;

}
