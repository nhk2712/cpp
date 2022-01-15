#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count=0;

    string str;
    cin >> str;

    for (int i=1;i<str.length();i++)
    {
        if (str.at(i)==str.at(0))
        {
            count++;
        }
    }

    cout << count;
    return 0;
}