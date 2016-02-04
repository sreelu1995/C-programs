/* finding factorial */

#include <iostream>
using namespace std;

main(){

    long int a;

    cout<<"enter a number\n";
    cin>>a;

    while(a) {

        for(int i= a-1; i>0; i--){

            a=a*i;

        }
        cout<<a;
        cout<<"\nenter a number\n";
        cin>>a;

    }

    cout<<"bye bye\n";

}
