#include <iostream>
using namespace std;

class phone {

   private:
	int area, exc;
	long int num;

   public:

	void set(int x,int y ,long int z) {
	area = x; 
	exc =y;
	num =z;
	}

	
	
	void input(){

	cout<<"enter area code , exchange code and number\n";
	cin>>area>>exc;
	cin>>num;
	}
	void display() {

	cout<<"("<<area<<")"<<" "<<exc;
	cout<<"-"<<num;
	}
};

int main() {

	phone p1, p2;

	p1.set(123,456,7890);

	p2.input();
	cout<<"mynumber is ";
	p1.display();
	cout<<"\nyour number is "<<;
	p2.display();
	cout<<"\n";

return 0;
}
	

