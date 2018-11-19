#include <iostream>

using namespace std;

int main()
{
    double r =0;
    double a =3.14159;
    double c = 0;
    double s = 0;
    double d = 0;

    std::cout << "Enter the radius:";
    std::cin >> r;
    d=2*r;
    c=2*a*r;
    s=a*r*r;
    cout << "Area of a circle" << s <<endl;
    cout << "Diameter of the circle" << d <<endl;
    cout << "The circumference of a circle" << c <<endl;
    return 0;
}
