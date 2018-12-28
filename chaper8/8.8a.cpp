#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< unsigned int,5 > values={2,4,6,8,10};
    for (size_t i = 0;i<values.size();++i)
    cout << setw(7)<<i<<setw(13)<<values[i] << endl;

}
