//WAP to implement inheritance
#include<iostream>
#include<string.h>
using namespace std;
class A{
	public:
		int a=10,b=20;
		void add(){
			cout<<"The additon of 2 numbers is "<<a+b<<endl;
		}
};
class B{
	public:
		int c=10,d=20;
		void mul(){
			cout<<"The mul of 2 numbers is "<<c*d<<endl;
		}
};
class C:public A,public B{
	public:
		void sub(){
			cout<<"The subtraction of 2 numbers is "<<a-b<<endl;
		}
};
int main(){
	C obj;
	obj.add();
	obj.mul();
	obj.sub();
	return 0;
}
