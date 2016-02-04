#include <iostream>
using namespace std;

struct point
{
    float x,y;
};
typedef struct point point;

int main()
{
    point p1,p2,p3;

    cout<<"enter coordinates of first point\n";
    cin>>p1.x>>p1.y;

    cout<<"enter the coordinates of second point\n";
    cin>>p2.x>>p2.y;

    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;

    cout<<"co ordinates of third point are "<<p3.x<<" "<<p3.y;

    return 0;
}
