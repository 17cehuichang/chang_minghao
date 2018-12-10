#include <iostream>
#include <array>

using namespace std;

int main()
{
    array< int , 15> bonus = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
   for (int i=0;i<bonus.size();i++)
        bonus[i]+=1;

        for (bonusa : bonus)
            cout << bonusa << " ";
    cout  << endl;

}
