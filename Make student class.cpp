//WAP to make student class
#include<iostream>
#include<string.h>
using namespace std;
class student{
	public:
		char name[20]="GG";
		int rollno = 2021;
		int dsa,c,cpp,m3,python,p;
		
		void getValues(){
			cout<<"Enter the marks of dsa,c,cpp,m3,python\n";
			cin>>dsa>>c>>cpp>>m3>>python;
		}
		void calculate(){
			p=(dsa+c+cpp+m3+python)/5;
		}
		void showValues(){
			cout<<"the percentage of student is "<<p;
		}
};
int main(){
	student s1;
	cout<<"Name ="<<s1.name<<endl<<"RollNo ="<<s1.rollno<<endl;
	s1.getValues();
	s1.calculate();
	s1.showValues();
	return 0;
}
