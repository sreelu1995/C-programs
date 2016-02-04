#include <iostream>
using namespace std;

int main()
{
    float a,b,d;
    int i;
    char ch;

    cout<<"welcome. Do you want to continue? (Y?N)";
    cin>>ch;

    while(ch=="Y")

    {
        cout<<"enter first no.\n";
        cin>>a;

        cout<<"select operation no.\n 1.addition\n2.sutraction\n3.multiplication\n4.division\n";
        cin>>i;

        cout<<"enter second no.\n";
        cin>>b;

        switch(i)
        {
            case 1: d=a+b;
            break;

            case 2: d= a-b;
            break;

            case 3: d=a*b;
            break;

            case 4: d=a/b;
            break;
        }

        cout<<"\n"<<d;

        cout<<"do you want to continue? (Y/N)\n";
        cin>>ch;
    }


}
