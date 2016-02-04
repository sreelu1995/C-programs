#include <iostream>
#include<string.h>

using namespace std;

class employee {

   private:
	string name;
	int num;
	double basic, da , it;
	double sal;

   public:
	void read(){
	cout<<"enter your name\n";
	cin>>name;
	
	cout<<"enter your employee number\n";
	cin>>num;
	
	cout<<"enter  basic salary\n";
	cin>>basic;

	
	}

	void cal(){

	da = (0.58)*(basic);

	sal = da + basic;

	it = (0.2)*(sal);
	}

	void print(){

	cout<<name<<"\n";
	cout<<"employee number is "<<num<<"\n";
	cout<<"salary is "<<sal<<"\n";
	cout<<"basic is "<<basic<<"\n";
	cout<<"IT and DA is "<<it<<"\t"<<da<<" respectively"<<"\n";
	}

};

int main() {

	int n ;

	cout<<"Enter number of employees\n";
	cin>>n;
	for(int i = 1; i <= n ; i++) {

		employee ei;

		ei.read();
		ei.cal();
		ei.print();
	}

return 0;
}
	
	
