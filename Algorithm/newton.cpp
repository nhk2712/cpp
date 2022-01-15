#include <iostream>
#include <math.h>
#include "factorial.h"
using namespace std;

int tohop(int n, int k){
    int tuso = factorial(n);
    int mau1 = factorial(k);
    int mau2 = factorial(n-k);
    int mauso = mau1*mau2;
    return tuso/mauso;
}

int main(){
    int count = 0;
    for (int a=0;a<4;a++){
        for (int b=0;b<4;b++){
            for (int c=0;c<4;c++){
                for (int d=0;d<4;d++){
                    for (int e=0;e<4;e++){
                        if (a+2*b+4*c+16*d+32*e==100){
                            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
                            count+=tohop(3,a)+tohop(3,b)+tohop(3,c)+tohop(3,d)+tohop(3,e);
                        }
                    }
                }
            }
        }
    }

    cout << count;
    return 0;
}