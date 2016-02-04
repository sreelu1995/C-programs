#include <iostream>
#include <cstring>
using namespace std;

class employee{
public:
    char name[20];
    long int id;
    double salary;

    virtual void get(){
	cout<<"Enter name and employee id: "<<endl;
	cin>>name;
	cin>>id;
	cout<<"Enter the salary:"<<endl;
	cin>>salary;
    }

    virtual void display(){
	cout<<"Name : "<<name<<endl;
	cout<<"Id : "<<id<<endl;
	cout<<"Salary : "<<salary<<endl;
    }

};

class programmer : public employee{
public:

    employee e;
    char curr_proj[20];
    int proj_no;

    virtual void get(){

	cout<<"PROGRAMMER"<<endl;
	e.get();
	cout<<"Enter the name of the current project"<<endl;
	cin>>curr_proj;
	cout<<"Enter project number"<<endl;
	cin>>proj_no;
    }

    virtual void display(){

	e.display();
	cout<<"Currently working on : "<<curr_proj<<endl;
	cout<<"Project number : "<<proj_no<<endl;
    }


};

class team_leader : public employee{
public:

    employee e;
    int no_mem;
    char team_name[20];
    char work[20];

    virtual void get(){
    
	cout<<"TEAM LEADER"<<endl
	e.get();
	cout<<"Enter team name : "<<endl;
	cin>>team_name;
	cout<<"Enter the work alloted : "<<endl;
	cin>>work;
	cout<<"Enter number of team members : "<<endl;
	cin>>no_mem;
    }

    virtual void display(){

	e.display();
	cout<<"Team name : "<<team_name<<endl;
	cout<<"Work alloted : "<<work<<endl;
	cout<<"No. of members in the team : "<<no_mem<<endl;

    }
	
};

class manager : public employee{
public:
    char dept[20];
    employee e;

    virtual void get(){

	cout<<"MANAGER"<<endl;
	e.get();
	cout<<"Enter department name : "<<endl;
	cin>>dept;
    }

    virtual void display(){

	e.display();
	cout<<"Depatment : " <<dept<<endl;
    }


};



int main(){

programmer p;

team_leader t;

manager m;

p.get();
p.display();

t.get();
t.display();

m.get();
m.display();

return 0;

}

