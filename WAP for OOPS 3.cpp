//WAP for OOPS
#include<iostream>
using namespace std;
class cars{
	public:
		void company(){
			cout<<"Tesla\n";
		}
		void model(){
			cout<<"X\n";
		}
		void oilType(){
			cout<<"Electrical\n";
			piston();
		}
	private:
		void piston(){
			cout<<"6 Piston\n";
		}
};
int main(){
	cars Tesla;
	Tesla.company();
	Tesla.model();
	Tesla.oilType();
	return 0;
}
