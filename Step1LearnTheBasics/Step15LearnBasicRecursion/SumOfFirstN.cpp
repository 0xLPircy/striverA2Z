long long rec(long long n){
    if(n==0){
        return 0;
    }
    return n + rec(n-1);
}


long long sumFirstN(long long n) {
    // Write your code here.
    n = rec(n);
    return n;
}