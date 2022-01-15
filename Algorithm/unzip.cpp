#include <iostream>
#include <string>
using namespace std;

int main(){
    string st;
    cin >> st;

    int n=st.length();

    char a[n];

    for (int i=0; i<st.length(); i++){
        if(96<(int)st.at(i)<123){
            break;
            n=i+1;
        }
        else{
            a[i] = st.at(i);
        }
    }

    for (int i=0; i<n; i++){
        cout << a[i];
    }
}