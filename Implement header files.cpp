//WAP to implement header files
#include<iostream>
#include<C:\Users\Documents\GitHub\C-programs\tiya.h>
using namespace std;
int main(){
	max(10,20);
	return 0;
}

//tiya.h
#include <iostream>
using namespace std;

void max(int a, int b){
	if (a>b){
		cout<<"A is greator than B";
	}
	else
		cout<<"B is greator than A";
}
