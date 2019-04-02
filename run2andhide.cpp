#include<windows.h> //for hide cmd
#include<cstdlib> //for use system function
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	ShowWindow(GetConsoleWindow(), SW_HIDE); //hide
	system("runmybat.bat"); //open batch file
	cout<<"anybody see me?";
	getch();
	//test for check that it's hide cmd tab
	
}