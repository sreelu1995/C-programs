#include <iostream>
using namespace std;

int main()
{
    int b[6]={0,0,0,0,0,0};
    int c, a;

    cout<<"enter no. of voters\n";
    cin>>c;

    for(int i=0; i<c; i++)
    {
        cout<<"enter the candidate no.\n";
        cin>>a;

        if((a<=5)&&(a>0))
        {
            switch(a)
            {
                case 1:b[0]+=1;
                break;
                case 2:b[1]+=1;
                break;
                case 3:b[2]+=1;
                break;
                case 4:b[3]+=1;
                break;
                case 5:b[4]+=1;
                break;
            }
        }
           else
           b[5]+=1;
    }
    for(int i=0; i<5;i++)
    {
        cout<<"candidate "<<i<<"gets "<<b[i]<<"votes\n";

    }
    cout<<"spoilt ballots are"<<b[5];

    return 0;
}
