//WAP for default constructor
#include<iostream>
using namespace std;
class rectangle{
	public:
		rectangle(){   //constructor
			int l,b,area;
			cout<<"Enter lenght and breadth of a rectangle\n";
			cin>>l>>b;
			cout<<"Area = "<<l*b;
		}
};
int main(){
	rectangle obj;   //instance of a class
	return 0;
}
