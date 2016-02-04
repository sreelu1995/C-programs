#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class timet{
 public:
    int hrs, min, sec;

    timet(){
        hrs = 0;
        min= 0;
        sec= 0;
    }
    timet(int a, int b, int c){
        hrs = a;
        min = b;
        sec = c;
    }
    void display(){
        cout<<hrs<<":"<<min<<":"<<sec<<endl;
    }
    timet operator + (const timet &a){

        hrs = this.hrs + a.hrs;
        min = this.min + a.min;
        sec = this.sec + a.sec;

        if(sec>=60){
        min++;
          sec = sec-60;
        }
        else if(min>=60){
          hrs++;
          min = min-60;
        }
    }


};
//void sort(time &, int );

int main(){
 int n,a,b;
 cout<<"enter number of time laps"<<endl;
 cin>>n;
 timet t[n], p;

 for(int i = 0; i<n ;i++){
    cout<<"Enter time in hours , minute, seconds"<<endl;
    cin>>t[i].hrs<<t[i].min<<t[i].sec;
    }

 cout<<"enter the two numbers of laps you want to add";
 cin>>a>>b;
 p = t[a]+t[b];
 p.display();

 //sort(t, n);
 for(int i = 0; i<n ;i++){
    t[i].display();
    cout<<endl;
    }
    return 0;

}
/*void sort(time &tm, int n){
    time w;
    for(int i = 0 ; i<n , }
*/
