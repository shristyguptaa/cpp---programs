//WAP to implement friend function
#include<iostream>
using namespace std;

class Tiya{
	public:
		int a=5,b=10;
		void mul(){
			cout<<"mul of a and b is "<<a*b<<endl;
		}
};
void divya(Tiya T){
	cout<<"Value of a,b = "<<T.a<<","<<T.b;
}
int main(){
	Tiya obj;
	obj.mul();
	divya(obj);
	return 0;
}
