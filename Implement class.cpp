//WAP to implement class
#include<iostream>
using namespace std;

class rectangle{
	public:
		int l,b,area;
		
		void getPara(){
			cout<<"Enter length\n";
			cin >>l;
			cout<<"Enter breath\n";
			cin >>b;
		}
		void findArea(){
			area =l*b;
		}
		void display(){
			cout<<"The area of a rectangle is "<<area;
		}
};

int main(){
	rectangle obj;   //instance of a class
	obj.getPara();
	obj.findArea();
	obj.display();
	return 0;
}
