#include <iostream>
using namespace std;

int main()
{
    char fname[20], lname[20], city[20], add[20], state[20];
    long int zip;
    long int ph;

    cout<<"enter your first name and last name\n";
    cin>>fname>>lname;

    cout<<"enter your address\n";
    cin>>add;

    cout<<"enter the name of your city and state\n";
    cin>>city>>state;

    cout<<"enter zip code and phone no.\n";
    cin>>zip>>ph;

    cout<<"hello "<<fname<<"\t"<<lname<<"\n";
    cout<<"you live in "<<add<<"\t"<<city<<"\t"<<state<<"\n";
    cout<<"zip code and phone no are "<<zip<<"\t"<<ph<<"\n";

    return 0;
}
