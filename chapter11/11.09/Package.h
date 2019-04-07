#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package
{
public:
    Package( const string &, const string &, const string &,
      const string &, int, const string &, const string &, const string &,
      const string &, int, double, double );

   void setSName( const string & );
   string getSName() const;
   void setSAddress( const string & );
   string getSAddress() const;
   void setSCity( const string & );
   string getSrCity() const;
   void setSState( const string & );
   string getSState() const;
   void setSZIP( int );
   int getZIP() const;
   void setRName( const string & );
   string getRName() const;
   void setRAddress( const string & );
   string getRAddress() const;
   void setRCity( const string & );
   string getRCity() const;
   void setRState( const string & );
   string getRState() const;
   void setRZIP( int );
   int getRZIP() const;
   void setWeight( double );
   double getWeight() const;
   void setCostPerOunce( double );
   double getCostPerOunce() const;

   double calculateCost() const;
private:

   string sName;
   string sAddress;
   string City;
   string sState;
   int sZIP;
   string rName;
   string rAddress;
   string rCity;
   string rState;
   int rZIP;

   double weight;
   double costPerOunce;
};

#endif
