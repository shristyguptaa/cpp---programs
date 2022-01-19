//WAP to implement multilevel inheritance
#include<iostream>
#include<string.h>
using namespace std;
class A{
	public:
		int a=10,b=20;
		void add(){
			cout<<"The addition of 2 numbers is "<<a+b<<endl;
		}
};
class B:public A{
	public:
		void mul(){
			cout<<"The mul of 2 numbers is "<<a*b<<endl;
		}
};
class C:public B{
	public:
		void sub(){
			cout<<"The sub of 2 numbers is "<<a-b<<endl;
		}
};
int main(){
	C obj;
	obj.add();
	obj.mul();
	obj.sub();
	return 0;
}
