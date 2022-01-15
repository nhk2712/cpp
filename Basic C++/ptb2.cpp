#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;

    if (a==0){
        if (b==0){
            if (c==0){
                cout << "Vo so nghiem thuoc R" << endl;
                return 0;
            }
            else{
                cout << "Vo nghiem" << endl;
                return 0;
            }
        }
        else{
            cout << "Mot nghiem x=" << -c/b << endl;
        }
    }
    else{
        double d=b^2-4*a*c;
        if (d<0){
            cout << "Vo nghiem" << endl;
            return 0;
        }
        else if(d==0){
            cout << "Nghiem kep x=" << -b/(2*a) << endl;
            return 0;
        }
        else{
            cout << "Hai nghiem phan biet" << endl;
            cout << "x1=" << -b+sqrt(d)/(2*a) << endl;
            cout << "x2=" << -b-sqrt(d)/(2*a) << endl;
        }
    }

    return 0;
}