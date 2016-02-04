/* with different bases */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int a;

    cout<<"Enter a decimal number";
    cin>>a;

    cout<<a<<" in haxadecimal is "<<setbase(16)<<a<<endl;
    cout<<a<<" in octadecimal is "<<setbase(8)<<a<<endl;
    cout<<a<<" in decimal is "<<setbase(10)<<a<<endl;

	return 0;

}
