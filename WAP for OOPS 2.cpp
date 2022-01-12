//WAP for OOPS 2
#include<iostream>
using namespace std;
class Result{
	public:
		float p,c,m,h,e,avg;
		void getValue(){
			p = 70;
			c = 75;
			m = 80;
			h = 98;
			e = 90;
		}
		void findAvg(){
			avg = (p+c+m+h+e)/5;
		}
		void display(){
			cout<<"Avg of all marks are "<<avg;
		}
};
int main(){
	Result obj;
	obj.getValue();
	obj.findAvg();
	obj.display();
	return 0;
}
