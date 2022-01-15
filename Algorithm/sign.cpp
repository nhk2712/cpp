#include <iostream>
#include <string>
using namespace std;

int main(){
    int val=0;
    int n;
    cin >> n;
    int k;
    cin >> k;

    string str[n];
    for (int i=0;i<n;i++){
        str[i]="+";
    }

    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int rmd[n];
    for (int i=0;i<n;i++){
        rmd[i] = arr[i]%k;
    }

    int sum = 0;
    for (int i=0;i<n;i++){
        sum+=rmd[i];
    }

    int hehe = sum%k;
    if (hehe==0)
    {
        val=1;
    }
    
    if (hehe!=0 && hehe%2==0){
        hehe/=2;

        for (int i=0;i<n;i++){
            if (rmd[i]==hehe){
                val=1;
                str[i]="-";
                break;
            }
        }

    }

    if(str[0]=="+"){
        str[0]="";
    }

    cout << val;
    if (val==1){
        for (int i=0;i<n;i++){
            cout << str[i];
        }
    }

    return 0;
}