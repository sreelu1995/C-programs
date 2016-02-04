#include <iostream>
using namespace std;

double power(double, int);

int main()
{
    double n, res;
    int p;

    cout<<"enter number and power\n";
    cin>>n;
    cin>>p;

    if(p==ETX)
    {
      p=2;
    } res = power(n,p);

    else
    res = power(n,p);

    cout<<"\n"<<res;

    return 0;
}

double power(double a,int b)
{
    if(b==1)
    return a;

    else
    return(power(a,b-1))
}
