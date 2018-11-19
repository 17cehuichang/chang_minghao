#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;


int main()
{

    double Salary=0;
    double salayvolume=0;
    double basic=200;

    std::cout<<"Enter sales in dollars(-1 to end):";
    std::cin>>salayvolume;
    while (salayvolume==-1)
    {
           return 0;
    }
     Salary=basic+(salayvolume*0.09);
    std::cout << "Salary is"<< Salary ;
    while (salayvolume!=-1)
     {
    std::cout<<"Enter sales in dollars(-1 to end):";
    std::cin>>salayvolume;
    while (salayvolume==-1)
    {
           return 0;
    }
     Salary=basic+(salayvolume*0.09);
     std::cout << "Salary is"<< Salary<<endl ;
     }
     return 0;

}
