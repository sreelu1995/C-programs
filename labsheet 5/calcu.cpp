#include <iostream>
using namespace std;

class calc {

  private:
	float x, y;
	char op;
	double res;
	
	void sum(){

	res = x+y;
	disp();
	}
	
	void sub(){

	res = x-y;
	disp();
	}

	void mul() {

	res= x*y;
	disp();
	}

	void div() {

	res =x/y;
	disp();
	}

	void disp(){

	cout<<res;
	}

  public:
	void input(void){

	cout<<"enter two numbers\n";
	cin>>x>>y;
	}
	void eval(void){

	cout<<"select option\na.add\nb.subtract\nc.multiply\nd.divide\n";
	cin>>op;
 
	   switch(op){
	   case 'a': sum();
		break;
	   case 'b':sub();
		break;
	   case 'c':mul();
		break;
	   case 'd':div();
		break;
	   default: cout<<"Not Valid";
		break;
	 }
   } 
};

int main(){

	calc c;
	char ch;
	
	cout<<"welcome to the calculator\n Do you want to continue(Y/N)?\n";
	cin>>ch;

	while ((ch=='y')||(ch=='Y')) {

	c.input();
	c.eval();

	cout<<"Do you want to continue(Y/N) ?";
	cin>>ch;
}

	cout<<"bye bye\n";
return 0;
}



	
	
	
