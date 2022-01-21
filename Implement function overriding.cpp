//WAP to implement function overriding
#include<iostream>
using namespace std;
class Rectangle{
	public:
		void area(int l,int b){
			int ar = l*b;
			cout<<"The area of Rectangle is "<<ar<<endl;
		}
};
class Rectangle2:public Rectangle{
	public:
		void area(int l,int b){
			int ar = l*b;
			cout<<"The area of Rectangle2 is "<<ar<<endl;
		}
};
int main(){
	Rectangle2 obj;
	obj.area(10,20);
	obj.Rectangle::area(12,50);
	return 0;
}
