#include<iostream>
using namespace std;

int main()
{
    int n;
    float sum=0.0;

    cout<<"enter n \n";
    cin>>n;

    for(float i=0.0; i<n; i++)
    {
        sum+=i/(i+1);
    }
    cout<<"sum of n terms is "<<sum<<"\n";

    return 0;
}
