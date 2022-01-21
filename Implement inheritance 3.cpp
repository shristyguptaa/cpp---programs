//WAP to implement inheritance
#include<iostream>
#include<string.h>
using namespace std;
class parent{
	public:
		int parentMoney,childMoney;
		void money1(){
			parentMoney = 10;
			cout<<"Parents money = "<<parentMoney<<endl;
		}
};
class child:public parent{
	public:
		void money2(){
			childMoney = 20;
			cout<<"Childs money = "<<childMoney<<endl;
			cout<<"Childs total money = "<<parentMoney + childMoney<<endl;
		}
};
int main(){
	child obj;
	obj.money1();
	obj.money2();
	return 0;
}
