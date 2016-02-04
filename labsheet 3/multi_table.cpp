/* multiplication table of 10 columns and 20 lines */

#include <iostream>
using namespace std;

int main() {

     int n;
     bool b=true;

     cout<<"Enter an interger \n";
     cin>>n;

     for(int i=0 ;i< 200; i++) {

        cout<<"\t"<<n*i;

        if(i%10==0)

            cout<<"\n";

    }
}


