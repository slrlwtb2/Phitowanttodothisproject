#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>


using namespace std;

class parasite{
	public:
		void question(int a, int b);
		int x;
		void damage();
		void showstat();
}; 

void parasite::showstat(){
	cout<<"Parasite's Hp =  ";
}



void parasite::question(int a, int b){
	cout<<"what is "<<a<<" + "<<b<<" ? ";
}


void scence(){
	    ifstream f("sprite.txt");

    if (f.is_open()){
    	cout << f.rdbuf();
	}
}

void playerLose(){
	cout << "*******************************************************\n";
	cout << "*                                                     *\n";
	cout << "*                   YOU LOSE!!!                       *\n";
	cout << "*                                                     *\n";
	cout << "*******************************************************\n";
}

void playerWin(){
	cout << "*******************************************************\n";
	cout << "*                                                     *\n";
	cout << "*               PARASITE WAS DESTROYED!!!             *\n";
	cout << "*                                                     *\n";
	cout << "*******************************************************\n";
}
