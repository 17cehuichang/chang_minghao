#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array<double, 1>grades={4};

    for ( size_t i=0; i<grades.size();++i)

     cout << setw(13)<< i<< setw(13) << grades[i]<<endl;

}
