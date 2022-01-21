//WAP to implement function overloading
#include<iostream>
using namespace std;
class Poly{
	public:
		void area(int l,int b){
			cout<<"Area of rectangle = "<<l*b<<"\n";
		}
		void area(float a){
			cout<<"Area of circle = "<<3.14*a*a<<"\n";
		}
		void area(int side){
			cout<<"Area of square = "<<side*side<<"\n";
		}
};
int main(){
	Poly obj;
	obj.area(5,4);
	obj.area(3.0f);
	obj.area(6);
	return 0;
}
