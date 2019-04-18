#include "ty.h"

using namespace std;
int main()
{
	int hp=10;
	cout<<"          You approching Parasite!! \n";
	srand(time(0));
	while(true){
				int a=rand()%50000;
		int b=rand()%50000;
		parasite().question(a,b);
		scence();
		parasite().showstat();
		
		cout<<" "<<hp;
		int x =a+b;
		cout<<"\nEnter your answer = "<<x;
		int ans;
		cin >> ans;
		if(ans == x){
			hp--;
		}
		else{
			playerLose();
			break;
		}
		if(hp<=0){
			playerWin();
			break;
		}
	}
}
