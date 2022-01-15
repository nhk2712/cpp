#include <iostream>
#include <windows.h>
using namespace std;

int n=0;
void hihi(){
    cout << n << endl;
    n+=1;
    Sleep(1000);
    hihi();
}

int main(){
    hihi();

    return 0;
}