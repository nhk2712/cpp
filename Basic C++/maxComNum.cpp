#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k=n/4;

    if (n%4==0)
    {
        cout <<  k;
    }
    else if (n%4==2)
    {
        k=k-1;
        if (k>0) {cout <<  k;}
        else {cout <<  -1;}
    }
    else if (n%4==1)
    {
        k=k-1;
        if (k>0) {cout <<  k;}
        else {cout <<  -1;}
    }
    else if (n%4==3)
    {
        k=k-1;
        if (k>0) {cout <<  k;}
        else {cout <<  -1;}
    }

    return 0;

}