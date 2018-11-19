#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    double number = 0;
    double largest = 0;

    while (counter <=9)
    {
        cin >> number;
        std::cout << "Number: " <<number<<std::endl;
        counter = counter+1;

        largest = largest>number?largest:number;
        std::cout << "Counter:" << counter << std::endl;
        std::cout << "The largest number is: "<<largest <<std::endl;

    }


}
