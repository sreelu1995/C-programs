#include <iostream>
#include <iomanip>
using namespace std;

struct rectangle {

    float l, b, a, p;
};
typedef struct rectangle rectangle;

int main(){

    rectangle box;

    cout<<"Enter the length of a rectangle";
    cin>>box.l;

    cout<<"Enter the breadth of the reactangle";
    cin>>box.b;

    cout<<endl<<endl;

    box.a = box.l * box.b;
    box.p = 2*(box.l+box.b);

    cout<<fixed<<showpoint<<setprecision(2);

    cout<<"Area is "<<box.a<<endl;
    cout<<"perimeter is "<<box.p;

    return 0;
}



