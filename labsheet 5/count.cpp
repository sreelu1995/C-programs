#include <iostream>
using namespace std;

class counter {

   private :
	int x;

   public:

	void set(int a){

	x = a;
	}
	
	void count(){
	x+=1;
	}
	
	void display(){

	cout<<x<<"\n";

	}
};

int main() {

	counter c;
	int a;
	char i;

	cout<<"Enter an option\na.Continue\nb.Exit\n";
	cin>>i;

	if(i =='a') {

	cout<<"enter a number";
	cin>>a;
	c.set(a);

	cout<<"should it get incremented?\n(Y/N)";
	cin>>i;
	
	while((i =='Y')||(i=='y')){
		
		c.count();
		
	
	cout<<"should it get incremented?\n(Y/N)\n";
	cin>>i;
	
	}

	
	c.display();
  }
	else
	cout<<"bye bye\n";

return 0;
}

	


