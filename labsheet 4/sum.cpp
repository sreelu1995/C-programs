/* bonous , sum */
#include <math.h>
#include<iostream>
using namespace std;

int main(){

   int n, p, sum=0;
   long int num,a;

   cout<<"enter number and its power";
   cin>>n>>p;

   num = pow(n,p);

   while(num) {
        a = num % 10;
        sum += a;
        num = num/10;


   }
   cout<<sum;
   return 0;


}
