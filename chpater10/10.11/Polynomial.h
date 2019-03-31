#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial
{
public:
   static const int maxTerms = 10;

   Polynomial();
   Polynomial operator+( const Polynomial & ) const;
   Polynomial operator-( const Polynomial & ) const;
   Polynomial operator*( const Polynomial & ) const;
   Polynomial &operator=( const Polynomial & );
   Polynomial &operator+=( const Polynomial & );
   Polynomial &operator-=( const Polynomial & );
   Polynomial &operator*=( const Polynomial & );


   void shuru();
   void print() const;
   int huoqu() const;
   int getExponent( int ) const;
   int getCoefficient( int ) const;
   void setCoefficient( int, int );
   ~Polynomial();



private:
   int numberOfTerms;
   int exponents[ maxTerms ];
   int coefficients[ maxTerms ];
   static void polynomialCombine( Polynomial & );
};


#endif // POLYNOMIAL_H_INCLUDED
