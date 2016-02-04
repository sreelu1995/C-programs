/* truth table */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout<<"A \tB \tA and B A or B\n";
    for(int i = 0; i <=1; i++) {

        for(int j = 0; j <=1; j++) {

            cout<<boolalpha<<i<<"\t"<<boolalpha<<j<<"\t";
            cout<<boolalpha<<(i&&j)<<"\t";
            cout<<boolalpha<<(i||j)<<endl;

            }
        }

        cout<<endl<<endl;

        cout<<endl<<endl;

    for(int i = 0; i <=1; i++) {

        for(int j = 0; j <=1; j++) {

            cout<<i<<"\t"<<j<<"\t";
            if((i==1)&&(j==1))
            cout<<noboolalpha<<"0"<<endl;

            else
            cout<<noboolalpha<<(i||j)<<endl;

            }
        }

        return 0;

}
