//WAP to implement scope resolution
#include<iostream>
using namespace std;

class Game{
	public:
		void play();    //Function declaration
};

//Function defination outside the class
void Game :: play(){
	cout <<"Function defined outside the class\n";
}
int main(){
	Game g;
	g.play();
	return 0;
}
