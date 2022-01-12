//WAP for OOPS
#include<iostream>
using namespace std;
void add(int a,int b){
	cout<<"addition = "<<a+b<<endl;
}
void sub(int a,int b){
	cout<<"sub = "<<a-b<<"\n";
}
void mul(int a,int b){
	cout<<"mul = "<<a*b<<endl;
}
int main(){
	int c,d;
	cout<<"Enter two values\n";
	cin>>c>>d;
	add(c,d);
	sub(c,d);
	mul(c,d);
	return 0;
}
