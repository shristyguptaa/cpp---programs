//WAP to implement polymorphism(multifaces/forms)
#include<iostream>
using namespace std;
class poly{
	public:
		void a(){
			cout<<"O Para\n";
		}
		void a(int a){
			cout<<"l Para\n";
		}
		void a(float a){
			cout<<"float Para\n";
		}
};
int main(){
	poly obj;
	obj.a(5);
	obj.a();
	obj.a(5.2f);
	return 0;
}
