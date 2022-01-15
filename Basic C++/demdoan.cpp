#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int arr[n];

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int count = 0;

    for (int i=0;i<n;i++){
        if (arr[i]>=m){
            count+=(i-0+1)*(n-1-i+1)-1;
        }

        
    }

    for (int k=1;k<n;k++){
        for (int i=0;i<n-k;i++){
            if (arr[i]>=m and arr[i+k]>=m){
                count--;
            }
        }
    }
    

    cout << count << endl;

    return 0;
}