#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class test{
public:
   int a;
    test(){
        cout<<"enter a number";
        cin>>a;
    }


   test operator +=(const test &b){
     a += b.a;

    }
    void display(){
    cout<<a;
    }
};
int main(){
    test t1;
    test t2;
    t1 +=t2;
    t1.display();
    return 0;
}
