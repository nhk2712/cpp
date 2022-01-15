#include <iostream>
#include <math.h>
using namespace std;

bool isSquare(int n){
    int a1 = sqrt(n);
    double a2 = sqrt(n);

    if (a2-a1==0) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    cout << isSquare(n) << endl;
    return 0;
}