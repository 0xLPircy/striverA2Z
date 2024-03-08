long long rec(long long n){
    if(n==0){
        return 1;
    }
    return n * rec(n-1);
}

int main(){
   long long ans = rec(7);
    printf("%ld\n", ans); 
    return 0;
}