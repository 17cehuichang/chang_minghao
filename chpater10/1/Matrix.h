#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>

class Matrix

{
    friend std ::ostream &operator <<( std::ostream &, const Matrix &);
    friend std ::istream &operator >>( std::istream &, Matrix &);
private:
     std::string line1;
     std::string line2;
     std::string line3;
};



#endif // MATRIX_H_INCLUDED
