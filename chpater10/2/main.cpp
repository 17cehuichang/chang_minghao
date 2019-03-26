#include  matrix 1.h
#include <iostream>

using namespace std;

Mat::Mat( int n, int m )

   {

 row=n;
 col=m;
 num_elements=n*m;
 data = new double[num_elements];
    for (int i=0; i
 data[i]=0.0;
	}




 