#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int _x;
    int _y;

    for (int x=0;x<999;x++){
        for (int y=0;y<999;y++){
            if (1+sqrt(x+y+3)-sqrt(x)-sqrt(y)==0){
                _x = x;
                _y = y;
                break;
            }
        }
    }

    cout << _x << " " << _y << endl;
    return 0;
}
