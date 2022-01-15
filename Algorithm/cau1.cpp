#include <iostream>
#include "factorial.h"
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    for (int i=1;i<n+1;i++){
        count +=factorial(i);
    }

    cout << count << endl;
    return 0;
}