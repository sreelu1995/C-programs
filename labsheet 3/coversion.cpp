/*coversion between Celsius to Fahrenheit */

#include <iostream>
using namespace std;

main(){

    float n, temp;
    int i;

    cout<<"select option\n1.Faherheit to Celsius\n2.Celsius to Faherheit\n";
    cin>>i;
    cout<<"Enter temperature\n";
    cin>>n;

    switch(i){

        case 1 : temp=((n-32)*5)/9;
            break;

        case 2:temp = (9*n)/5 +32;
            break;

        default: cout<<"invalid character\n";
            break;
    }

    cout<<"required temperature is "<<temp<<"\n";
}

