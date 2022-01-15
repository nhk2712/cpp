#include <iostream>
#include <string>
using namespace std;

int doixung(){
    string str;
    cin >> str;

    int a = str.length()/2;

    for (int i=0; i<a; i++){
        if (str.at(i)==str.at(str.length()-i-1)){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    cout << doixung() << endl;
}