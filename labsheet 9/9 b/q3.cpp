#include <iostream>
#include <iomanip>
using namespace std;

class student{
public:

    char name[20];
    long int roll;

    virtual void get(){
	cout<<"Enter name"<<endl;
	cin>>name;
	cout<<"Enter roll no."<<endl;
	cin>>roll;
    }

    virtual void display(){
	cout<<"Name : "<<name<<endl;
	cout<<"Roll no. : "<<roll<<endl;
    }

};

class sah : public student {
public:

    
    char proj_name[20];
    int team_mem;

    virtual void get(){
	
	
	cout<<"Enter SAH project name"<<endl;
	cin>>proj_name;
	cout<<"Enter No. of team members"<<endl;
	cin>>team_mem;
    }

    virtual void display(){

	
	cout<<"Project name : "<<proj_name<<endl;
	cout<<"No. of Team members :"<<team_mem<<endl;
    }

};

class academic : public student {
public:
    char elective[20];
    

    virtual void get(){
	
	cout<<"Enter elective "<<endl;
	cin>>elective;
    }


    virtual void display(){

	
	cout<<"Elective "<<elective<<endl;
    }
};

class sports : public student {
public:

    student s;
    char game[10];
    int prize;

    virtual void get(){

	s.get();
	cout<<"Enter game played"<<endl;
	cin>>game;
	cout<<"Enter prizes won"<<endl;
	cin>>prize;
    }

    virtual void display(){

	s.display();
	cout<<"Game : "<<game<<endl;
	cout<<"No. of prizes " <<prize<<endl;

    }	

};

class report : public sah , public academic {

public:

    sah serve;
    academic a;

    char grade;
    
    virtual void get(){

	serve.get();
	a.get();
	cout<<"Enter grade"<<endl;
	cin>>grade;
    }

    virtual void display(){

	serve.display();
	a.display();
	cout<<"Grade :"<<grade<<endl;

    }

};


int main(){

sports s;
report r;

s.get();
s.display();

r.get();
r.display();

return 0;
}
