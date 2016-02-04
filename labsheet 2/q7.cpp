#include <iostream>
using namespace std;

int main()
{
   int income;
    float tax;

    cout<<"enter your income\n";
    cin>>income;

    if(income<= 150000)
     tax=0.0;

     else if((income>=150001)&&(income<=300000))
     tax = 0.1*income;

     else if((income>=300001)&&(income<=500000))
     tax = 0.2*income;

     else
     tax = 0.3*income;

     cout<<"you need to pay "<<tax<<"as your tax\n";

    return 0;
}






