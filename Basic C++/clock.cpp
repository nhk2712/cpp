#include <iostream>
#include <windows.h>
using namespace std;

int hr=0;
int phut=0;
int sec=0;

void time(){
    if (sec<10 and phut>=10)
    {
        cout << hr << " : " << phut << " : 0" << sec << endl;
    }
    else if (phut<10 and sec>=10)
    {
        cout << hr << " : 0" << phut << " : " << sec << endl;
    }
    else if (sec<10 and phut<10)
    {
        cout << hr << " : 0" << phut << " : 0" << sec << endl;
    }
    else if (sec>=10 and phut>=10)
    {
        cout << hr << " : " << phut << " : " << sec << endl;
    }
    
    Sleep(1000);

    sec+=1;

    if (sec==60){
        phut+=1;
        sec=0;
    }

    if (phut==60){
        hr+=1;
        phut=0;
    }

    system("cls");
    time();
}

int main(void){
    time();
    return 0;
}
