#include <iomanip>
#include "Matrix.h"
#include <iostream>


using namespace std;

 ostream &operator<<( ostream &output, const Matrix &number )
 {

     output << number.line1<< "\n" << number.line2<< "\n"<< number.line3;

    return output;
      }

istream &operator>> (istream &input, Matrix &number )
{

    input >> setw(3)>>number.line1;

    input >> setw(3)>>number.line2;

    input >> setw(3)>>number.line3;
    return input;
}
int main()
{
     Matrix mat;

     cout << "Enter the number:"<<endl;
     cin >> mat;
     cout << "The matrix is :\n";
     cout << mat <<endl;
}

