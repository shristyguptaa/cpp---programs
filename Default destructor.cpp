//WAP for default destructor
#include<iostream>
using namespace std;
class Rectangle{
	public:
		rectangle(){    //constructor
			int l,b,area;
			cout<<"Enter lenght and breadth of a rectangle";
			cin>>l>>b;
			cout<<"Area = "<<l*b<<endl;
		}
		~Rectangle(){   //destructor
			cout<<"Memory is being deallocated";
		}
};
int main(){
	Rectangle obj;   //instance of a class
	return 0;
}
