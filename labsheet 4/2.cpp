#include <iostream>
#include <iomanip>
using namespace std;

struct dob
{
    int day,month,year;

};

typedef struct dob dob;
int main()
{
    dob d,cur;
    cur={12,8,2014};
    int y,m,dte,extra;
    string name;
   cout<<"Enter your name: ";
   getline(cin,name);
   cout<<"Enter the date of birth (dd/mm/yyyy): ";
   cin>>d.day;
   cout<<"/";
   cin>>d.month;
   cout<<"/";
   cin>>d.year;
   y=2014-d.year;
   if(d.month>cur.month)
   {
       y=y-1;
       m=12-d.month+cur.month;
   }
   else
      m=cur.month-d.month;

    if((cur.day-d.day)<0)
    {
        m=m-1;
        dte=30-d.day+cur.day;
    }
    else
    dte=cur.day-d.day;

    extra=((12-m)*30)-dte;

cout<<"Hey "<<name<<"! Your age is "<<y<<"years, "<<m<<"months, and "<<dte<<"days"<<endl;
cout<<"Your Age in Days: "<<(y*365)+(m*30)+(dte)<<"days since your birth"<<endl;
cout<<"Your Age in Hours: "<<((y*365)+(m*30)+(dte))*24<<" hours since your birth"<<endl;
cout<<"Your Age in Minutes "<<((y*365)+(m*30)+(dte))*24*60<<"minutes since your birth"<<endl;
cout<<extra<<" days left for your next birthday"<<endl;


}
