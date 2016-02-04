/*compound interest */

#include<iostream>
using namespace std;

main(){
    int t;
    float p, r, amt;

    cout<<"enter the principle amount\n";
    cin>>p;
    cout<<"enter rate of interest per year";
    cin>>r;
    cout<<"enter no. of years you want to invest";
    cin>>t;

    amt = p;

    for(int i=1; i<=t;i++){

     amt+= (amt*r)/100;
    }



    cout<<"You get "<<amt<<" rupees after "<<t<<" years";


}
