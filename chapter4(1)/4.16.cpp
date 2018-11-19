#include <iostream>

using namespace std;

int main()
{
    double hoursworked = 0;
    double rate = 0;
    double Salary = 0;

    std::cout<< "Enter hours worked (-1 to end):";
    std::cin >> hoursworked;

    while (hoursworked==-1)
    {
        return 0;
    }
    while (hoursworked!=-1)
    {

    while (hoursworked>40)
    {
      std::cout<< "Enter hourly rate of the employee ($00.00):";
       std::cin >> rate;

    Salary = 40*rate+(hoursworked-40)*(1.5*rate);
    std::cout << "Salary is $" << Salary << std::endl;
    cout << endl;
    std::cout<< "Enter hours worked (-1 to end):";
    std::cin >> hoursworked;
    while (hoursworked==-1)
    {
        return 0;
    }
    }
    while (hoursworked<=40)
    {    std::cout<< "Enter hourly rate of the employee ($00.00):";
         std::cin >> rate;
        Salary = hoursworked*rate;
         std::cout << "Salary is $" << Salary << std::endl;
          cout << endl;
        std::cout<< "Enter hours worked (-1 to end):";
        std::cin >> hoursworked;
         while (hoursworked==-1)
    {
        return 0;
    }
    }

    }
}
