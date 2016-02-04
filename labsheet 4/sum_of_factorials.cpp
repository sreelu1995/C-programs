/* sum of factorials */

#include <iostream>
using namespace std;

int main() {

    int n;
    long int fact=1, sum=0;

    cout<<"enter a number";
    cin>>n;

    for(int i = 1; i <=n ; i++) {

        fact = 1;

        for(int j = 1; j <= i; j++) {



            fact = fact*j;


        }

        sum +=fact;

    }

    cout<<sum;

    return 0;
}
