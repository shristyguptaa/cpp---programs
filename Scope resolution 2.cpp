//WAP to implement scope resolution
#include<iostream>
using namespace std;

char c ='a'; //Global variable(accessible to all function)
int main(){
	char c ='b'; //local variable(accesible only in main function)
	cout<<"Local variable : "<<c<<"\n";
	cout<<"Global variable : "<<::c<<"\n"; //using scope resolution operator
	return 0;
}
