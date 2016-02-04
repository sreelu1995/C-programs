#include <iostream>
#include <iomanip>

#include <cstdlib>
using namespace std;

class rational {
public:
    int num, den;

    rational(){
        num = 0;
        den = 1;
    }
    rational(int x, int y){
        num = x;
        den = y;
    }
    rational operator +(rational &a){
        rational z;
        z.num = a.num*this.den + this.num*a.den;
        z.den = a.den*this.den;
        return z;
    }
    void reduce(){

        for(int i = num; i>=1; i--){
            if((num%i == 0) && (den%i == 0)){
                num = num/i;
                den = den/i;
            }
        }

    }

    friend istream& operator >> (istream& s, rational& a){

        s >> a.num >> a.den;
        return s;
       }

    friend ostream& operator << (ostream& s, rational& a){
        s << a.num << endl << a.den;
        return s;

    }
};

int main(){
rational a(3,4), b, c;
cout << a;
cin >> b;
c = b+a;
c.reduce();
cout << c;
return 0;

}
