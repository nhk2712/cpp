#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int sub[n-1];

    for (int i = 0; i < n-1; i++){
        sub[i] = arr[i+1] - arr[i];
    }

    int len=0;
    int bang=0;
    int xuong=0;

    for (int i = 0; i < n-1; i++){
        if (sub[i]>0){
            len++;
        }
        else if (sub[i]==0)
        {
            bang++;
        }
        else if (sub[i]<0){
            xuong++;
        }
    }

    cout << len << " " << bang << " " << xuong << endl;

    return 0;

}