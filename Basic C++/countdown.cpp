#include <iostream>
#include <windows.h>
using namespace std;

int hr;
int phut;
int sec;

int main(void){
    cin >> hr; cout << " : ";
    cin >> phut; cout << " : ";
    cin >> sec;

    while(true){
    cout << hr << " : " << phut << " : " << sec;

    Sleep(1000);

    sec-=1;

    if (sec==-1){
        phut-=1;
        sec=59;
    }

    if (phut==-1){
        hr-=1;
        phut=59;
    }

    system("cls");
    if (hr==0 and phut==0 and sec==0){
        break;
        
    }
    
    }

    cout << "Time's up!" << endl;
    return 0;

}
