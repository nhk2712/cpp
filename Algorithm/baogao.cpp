#include <iostream>
using namespace std;

int n,a1,a2,a3,a4,a5;
int b1=0,b2=0,b3=0,b4=0,b5=0;

void chiagao1(){   
    if (n>=(100*a1)){
        b1+=a1;
        n-=100*a1;
    }
    else{
        if(a1==0) return;
        a1--;
        chiagao1();
    }
}

void chiagao2(){
    if (n==0) return;
    if (n>=(50*a2)){
        b2+=a2;
        n-=50*a2;
    }
    else{
        if(a2==0) return;
        a2--;
        chiagao2();
    }
}

void chiagao3(){
    if (n==0) return;
    if (n>=(20*a3)){
        b3+=a3;
        n-=20*a3;
    }
    else{
        if(a3==0) return;
        a3--;
        chiagao3();
    }
}

void chiagao4(){
    if (n==0) return;
    if (n>=(10*a4)){
        b4+=a4;
        n-=10*a4;
    }
    else{
        if(a4==0) return;
        a4--;
        chiagao4();
    }
}

void chiagao5(){
    if (n==0) return;
    if (n>=(5*a5)){
        b5+=a5;
        n-=5*a5;
    }
    else{
        if(a5==0) return;
        a5--;
        chiagao5();
    }
}

int main(){
    cin >> n >> a1 >> a2 >> a3 >> a4 >> a5;
    chiagao1();
    chiagao2();
    chiagao3();
    chiagao4();
    chiagao5();

    cout << n << endl;
    cout << b1 << " " << b2 << " " << b3 << " " << b4 << " " << b5 << endl;

    return 0;
}

