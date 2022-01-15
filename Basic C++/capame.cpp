#include <iostream>
#include <math.h>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(){
    int v1,v2,v3,v4,v5;
    cin >> v1;
    cin >> v2;
    cin >> v3;
    cin >> v4;
    cin >> v5;

    int t1=lcm(v1,v2,v3,v4,v5);

    cout << t1;

    return 0;
}