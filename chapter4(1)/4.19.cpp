#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    double number = 0;
    double largest = 0;
    double a = 0;

    while (counter <=9)
    {
        cin >> number;
        counter = counter+1;
        if( number>largest)
         {
           a=largest;
          largest = number;

           std::cout << "The second number is: "<<a <<std::endl;
            std::cout << "The largest number is: "<<largest <<std::endl;
         }
           else
           {
            largest=largest;
           if(number>a)
            a = number;
           else
            a=a;
            std::cout << "The second number is: "<<a <<std::endl;
             std::cout << "The largest number is: "<<largest <<std::endl;
           }


        std::cout << "Counter:" << counter << std::endl;




    }


}

