#include <string>
#include <iostream>
using namespace std;

int defYear(int n){
    int y = n%100;
    return y;
}

int defMonth2(int n){
    int y = n%100;
    int m = n % 10000;
    return (m-y)/100;
}

int defMonth1(int n){
    int y = n%100;
    int m = n % 1000;
    return (m-y)/100;
}

int defDate1(int n){
    int m = n % 1000;
    return (n-m)/1000;
}

int defDate2(int n){
    int m = n % 10000;
    return (n-m)/10000;
}

int main(){
    int n;
    string str;

    cin >> n;
    if (n<1000 || n> 999999){
        cout << "Khong";
        return 0;
    }

    int yr = defYear(n);
    if (yr>0) yr+=2000;
    else yr+=2100;
    int nhuan = yr%4;

    if(defMonth1(n)==0){
        if (defMonth2(n)!=10){
            cout << "Khong";
            return 0;
        }
        else{
            if(defDate2(n)>31 || defDate2(n)<1){
                cout << "Khong";
                return 0;
            }
            else{
                cout << defDate2(n) << "-" << defMonth2(n) << "-" << yr;
                return 0;
            }
        }
    }

    else if (defMonth1(n)==3 || defMonth1(n)==5 || defMonth1(n)==7 | defMonth1(n)==8){
        if (defDate1(n)>31 || defDate1(n)<1){
            cout << "Khong";
            return 0;
        }
        else{
            cout << defDate1(n) << "-" << defMonth1(n) << "-" << yr;
            return 0;
        }
    }

    else if (defMonth1(n)==4 || defMonth1(n)==6 || defMonth1(n)==9){
        if (defDate1(n)>30 || defDate1(n)<1){
            cout << "Khong";
            return 0;
        }
        else{
            cout << defDate1(n) << "-" << defMonth1(n) << "-" << yr;
            return 0;
        }
    }

    else{
        if (defDate1(n)%10==1){
            if (defMonth1(n)==1){
                if(defDate2(n)>30 || defDate2(n)<1){
                    if(defDate2(n)>3 || defDate2(n)<0){
                        cout << "Khong";
                        return 0;
                    }
                    else{
                        cout << defDate1(n) << "-" << defMonth1(n) << "-" << yr;
                        return 0;
                    }
                }
                else{
                    cout << defDate2(n) << "-" << defMonth2(n) << "-" << yr;

                    if(defDate1(n)>31 || defDate1(n)<1){
                        return 0;
                    }
                    else{
                        cout << " hoac " << defDate1(n) << "-" << defMonth1(n) << "-" << yr;
                        return 0;
                    }
                }
            }
            else if(defMonth1(n)==2){
                if(defDate2(n)>31 || defDate2(n)<1){
                    if(defDate2(n)>2 || defDate2(n)<0){
                        cout << "Khong";
                        return 0;
                    }
                    else{
                        cout << defDate1(n) << "-" << defMonth1(n) << "-" << yr;
                        return 0;
                    }
                }
                else{
                    cout << defDate2(n) << "-" << defMonth2(n) << "-" << yr;

                    if(defDate1(n)>28 || defDate1(n)<1){
                        return 0;
                    }
                    else{
                        cout << " hoac " << defDate1(n) << "-" << defMonth1(n) << "-" << yr;
                        return 0;
                    }
                }
            }
        }
        else{
            if (defMonth1(n)==1){
                if(defDate1(n)>31 || defDate1(n)<1){
                    cout << "Khong";
                    return 0;
                }
                else{
                    cout << defDate1(n) << "-" << defMonth1(n) << "-" << yr;
                    return 0;
                }
            }
            else if (defMonth1(n)==2){
                if (nhuan==0){
                    if(defDate1(n)>29 || defDate1(n)<1){
                        cout << "Khong";
                        return 0;
                    }
                    else{
                        cout << defDate1(n) << "-" << defMonth1(n) << "-" << yr;
                        return 0;
                    }
                }
                else{
                    if(defDate1(n)>28 || defDate1(n)<1){
                        cout << "Khong";
                        return 0;
                    }
                    else{
                        cout << defDate1(n) << "-" << defMonth1(n) << "-" << yr;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}