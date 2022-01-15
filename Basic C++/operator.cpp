#include <iostream>
#include <math.h>
using namespace std;

class Num{
    public:
    int n;

    Num(int init){
        this->n = init;
    }

    Num operator !(){
        Num res;
        int count = 1;
        for (int i=2;i<n;i++){
            count *= i;
        }

        res.n = count;
        return res;
    }
};

int main(){
    Num a = Num(5);
    Num res = a!;
    cout << res.n;
    return 0;
}