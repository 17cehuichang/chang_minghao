#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< int , 1> alphabet={6};
    for ( size_t i = 0; i < alphabet.size();i++)
    cout << setw(13)<< i<< setw(13) << alphabet[i]<<endl;

}
