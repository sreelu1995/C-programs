#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class toll_booth{
    private:
    unsigned int n;
    double t;

    public:

    toll_booth(){
        n = 0;
        t = 0;
    }

    void paying_car(){
        n++;
        t += 0.50;
    }

    void non_paying_car(){
        n++;
    }

    void display(){
        cout<<"Number of cars passed today is "<<n<<endl;
        cout<<"Toll collected today is "<<t<<endl;
    }

};

int main(){

    toll_booth tb;
    char ch;
    cout<<"select"<<endl<<"y.Paid"<<endl<<"n.Not paid"<<endl;
     cin>>ch;
   while(ch != 27){

        if(ch == 'y'){
            tb.paying_car();
        }
        else {
            tb.non_paying_car();
        }
    cout<<"select"<<endl<<"y.Paid"<<endl<<"n.Not paid"<<endl;
   cin>>ch;
    }
 tb.display();

return 0;
}
