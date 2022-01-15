#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long L,R;
    cin >> L >> R;

    long long n = R - L; //hiệu giữa R và L
    long long x = L; //đặt x=L

    long long a=1;
    long long b=2*x + 1;
    long long c = x - n*x - n*n/2 - n/2;

    long long delta = b*b - 4*a*c;
    long long f = (n-1)*(n-1)*a + (n-1)*b +c;

    if (c>=0) {
        cout << L  << endl;
        cout << c << endl;
        return 0;
    }
    else if (c<0 && f>=0) {
        double solu = -b + sqrt(delta);
        solu/=2;
        double test = floor(solu);
        test+=0.5;
        if (solu<test){
            long long res = floor(solu);
            cout << L + res << endl;
            long long resy = res*res*a + res*b + c;
            cout << abs(resy) << endl;
            return 0;
        }
        else{
            long long res = ceil(solu);
            cout << L + res << endl;
            long long resy = res*res*a + res*b + c;
            cout << abs(resy)  << endl;
            return 0;
        }
    }
    else{
        long long res = n-1;
        long long resy = res*res*a + res*b + c;
        cout << L + res << endl;
        cout << abs(resy) << endl;
        return 0;        
    }

    return 0;
}