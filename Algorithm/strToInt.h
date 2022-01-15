int strToInt(string s){
    int count = 0;
    int n = s.length();
    n-=1;
    for (int i=0;i<n+1;i++){
        count+=(int(s.at(i))-48)*pow(10,n-i);
    }
    return count;
}