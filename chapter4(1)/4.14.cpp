#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int account;
    double beginningbalance;
    double totalcharges;
    double totalcredits;
    double creditlimit;
    double newbalance;

    std::cout<<"Enter account number (-1 to quit ):";
    std::cin>>account;

    while (account==-1)
    {
        return 0;
    }

    std::cout<<"Enter beginning balance:";
    std::cin>>beginningbalance;
    std:;cout<<"Enter total charges:";
    std::cin>>totalcharges;
    std::cout<<"Enter total credits:";
    std::cin>>totalcredits;
    std::cout<<"Enter credit limit:";
    std::cin>> creditlimit;


    while (account!=-1)
    {
        newbalance=beginningbalance+totalcharges-totalcredits;

        if (newbalance>creditlimit)
        {
            std::cout<<"Account:"<<account<<endl;
            std::cout<<"Credit limit:"<<creditlimit<<endl;
            std::cout<<"Balance:"<<newbalance<<endl;
            std::cout<<"Credit Limit Exceeded."<<endl;
        }

       std:: cout<<"Enter account number (-1 to quit ):";
       std::cin>>account;

    while (account==-1)
    {
        return 0;
    }
    std::cout<<"Enter beginning balance:";
    std::cin>>beginningbalance;
    std::cout<<"Enter total charges:";
    std::cin>>totalcharges;
    std::cout<<"Enter total credits:";
    std::cin>>totalcredits;
    std::cout<<"Enter credit limit:";
    std::cin>> creditlimit;
    }

   return 0;

}
