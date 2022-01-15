#include <string>
#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    string x;

    char result[5];

    char num[100];
    int k=0;

    for (int i = 0; i <str.length(); i++) {
        if ( int(str.at(i))>47 and int(str.at(i))<58 ){
            num[k]=str.at(i);
            k++;
        }
    }

    x=num;

    int n=x.length();
    int j=int(x.at(0));

    for (int i=1; i<n-4; i++) {
        if ( int(x.at(i)) > j ){
            j=int(x.at(i));
        }
    }

    //nếu gặp 9 thì break luôn khỏi chạy
    //nếu rơi vào số cuối thì lấy 4 số còn lại luôn khỏi bàn
    //nếu lấy chữ số thứ 2 còn 3 số thì lấy luôn, k đủ thì chạy lại
    //nếu lấy chữ số thứ 3 còn 2 số thì lấy luôn, k đủ thì chạy lại
    //nếu lấy chữ số thứ 4 còn 1 số thì lấy luôn, k đủ thì chạy lại

    result[0]=char(j);

    cout << result << endl;
    return 0;
}