int factorial(int n) {
    int count = 1;
    for (int i=1; i<n+1; i++) {
        count*=i;
    }
    return count;
}