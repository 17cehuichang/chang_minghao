#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    double hours= 0;
    double charge = 0;







    cout << "car"<< setw(21) << "Hours" << setw (21) << "Charge"<< endl;
    cout << fixed << setprecision(2);

    for( unsigned  int car =1;car<=3;++car)
       {

           if(hours<=3)
            charge=2.00;
           else
           {
               if(hours<=19)
            charge=2.00+(hours-3)*0.50;
            else
                charge=10;
           }




    cout << setw(4) << car<< setw(21)<<hours <<setw(21) << charge<< endl;
       }
       hours= hours+hours;
    cout << "TOTAL" <<setw(20) << hours <<setw(20) << charge <<endl;
}
