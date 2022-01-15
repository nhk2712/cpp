#include <iostream>
using namespace std;

int main(){
    int a=0;
    int b=0;

    cout << a++ << endl; //thực hiện hành động khác trước khi cộng

    cout << ++b << endl; //cộng xong thực thi hành động khác

    cout << a << endl; 

    return 0;
}