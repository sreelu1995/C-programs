
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

class stringrev {
    string st;
    int l ;
    public:
    stringrev(){
    cout<<"enter a string"<<endl;
    cin>>st;
    }

    void length(){
        int i = 0;
    while(st[i] !='\0'){
        i++;
        }
        l= i;
        cout<<"length "<<l<<endl;
    }

    void reverseit();
};

int main(){
    stringrev s;
    s.length();
    s.reverseit();
return 0;
}
void stringrev :: reverseit(){

    char ch;
    for(int i=0 ; i < l; i++){
        ch = st[l-i-1];
        st[l-i-1] = st[i];
        st[i] = ch;

    }
    cout<<st<<endl;

}
