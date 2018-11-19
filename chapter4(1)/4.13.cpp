#include <iostream>

using namespace std;

int main()
{
    double miles = 0;
    double gallons = 0;
    double MPG = 0;
    double TotalMPG = 0;
    double a = 0;
    double b = 0;




    std::cout << "Enter miles driven(-1 to quit):";
    std::cin >> miles;

    while ( miles==-1)
        {
            return 0;}
    while ( miles!=-1)
    {

    std::cout << "Enter gallons used:";
    std::cin >> gallons;

    MPG = miles/gallons;
    a = a+miles;
    b = b+gallons;
    TotalMPG = a/b;


    std::cout << "MPG this map:"<< MPG<<std::endl;
    std::cout << "Total MPG:"<< TotalMPG<<std::endl;

    cout << endl;


    std::cout << "Enter miles driven(-1 to quit):";
    std::cin >> miles;
    }


}

