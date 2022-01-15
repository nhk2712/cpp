#include <iostream>
#include <string>
using namespace std;

int main()
{
    string xau;
    getline(cin,xau);

    int n=xau.length();

    for (int k=0;k<n/2;k++)
    {
        if (xau.at(k)!=xau.at(n-k-1))
        {
            printf("false");
            break;
        }
        else
        {
            printf("true");
            break;
        }
    }

    return 0;
}