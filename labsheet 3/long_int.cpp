/* converting 6 digits into a single number */
#include<math.h>
#include<iostream>


using namespace std;

main(){

    char ch[6];
    int i ;
    long int a=0;

    for(i=5; i>=0 ;i--){

        cout<<"enter a digit\n";
        cin>>ch[i];

        ch[i]=ch[i]-'0';
        a+=(ch[i]*pow(10,i));


    }
    cout<<a<<"\n";

}
