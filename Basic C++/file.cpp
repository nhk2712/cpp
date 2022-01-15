#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream f;

    f.open("D://Coding/text.txt",ios::in);

    string data = " ";
    getline(f, data);

    cout << data << endl;

    f.close();
    
    system("pause");
    return 0;
}