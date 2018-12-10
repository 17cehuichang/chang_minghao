#include <iostream>
#include <array>

using namespace std;

int main()
{
    array < int,5> bestScores = {0,1,2,3,4};

    for( int a : bestScores)
        cout << a << endl;
    cout <<   endl;
}
