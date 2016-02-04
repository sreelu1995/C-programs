#include <iostream>
#include <iomanip>
using namespace std;
int main(){
string n;
int i = 5;
cout<<"enter the string";
    while((cin>>n>>setw(5))!= '\0'){
        cout<<n;
        cout.width(i++);
        cout<<endl;
    }
}
