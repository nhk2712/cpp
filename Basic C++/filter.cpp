#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string str[50];

    int k;
    for (int i=0;i<50;i++){
        cin >> str[i];
        if (str[i]=="."){
            break;
            k=i;
        }
    }

    for (int i=0;i<k+1;i++){
        if (str[i]=="fuck"){
            str[i]="****";
        }
        
        else if (str[i]=="shit")
        {
            str[i]="****";
        }
        
        else if (str[i]=="butt")
        {
            str[i]="****";
        }

        else if (str[i]=="anal"){
            str[i]="****";
        }

        else if (str[i]=="gay"){
            str[i]="***";
        }

        else if (str[i]=="nigga")
        {
            str[i]="*****";
        }
        
    }

    for (int i=0;i<k+1;i++){
        cout << str[i] << " ";
    }

    return 0;
}