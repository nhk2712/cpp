#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
    }

    int le=0,chan=0;

    for (int i = 0;i<n;i++){
        if (i%2==1 && arr[i]%2==1) le++;
        else if (i%2==0 && arr[i]%2==0) chan++;
    }

    if(le!=chan){
        cout << -1;
        return 0;
    }

    cout << le << endl;
    int arle[le];
    int arch[le];

    int ile=0,ich=0;

    for (int i = 0;i<n;i++){
        if (i%2==1 && arr[i]%2==1){
            arle[ile]=i+1;
            ile++;
        }
        else if (i%2==0 && arr[i]%2==0){
            arch[ich]=i+1;
            ich++;
        }
    }

    for (int i=0;i<le;i++){
        cout << arle[i] << " " << arch[i] << endl;
    }

    return 0;
}