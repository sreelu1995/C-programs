/* padding characters */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int a;

    cout<<"enter a number ";
    cin>>a;

    cout<<left<<"*****"<<a<<endl;
    cout<<right<<"%%%%%"<<a;

    return 0;
}
