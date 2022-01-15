#include <iostream>
#include <math.h>
using namespace std;

int func(int n){
    int rs=pow(n,3) - 2*91*pow(n,2) + 91*91*n;
    return rs;
}

int main(){
    for (int a=1;a<90;a++){
        for (int c=a+1;c<91;c++){
            if (func(a)==func(c)){
                cout << a << " " << c << endl;
            }
        }
    }
    return 0;
}
