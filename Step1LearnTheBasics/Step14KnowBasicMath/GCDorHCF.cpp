// OPTIMAL
int calcGCD(int n, int m)
{
    if (m > n)
    {
        swap(n, m);
    }

    // Base case of gcd(n,0) = n.
    if (m == 0)
    {
        return n;
    }

    // Using Euclidean Theorem.
    return calcGCD(m, n % m);
}

// Mine
int calcGCD(int n, int m){
    // Write your code here.
    int max;
    if (n > m) {
      max = m;
    } else {
      max = n;
    }
    // printf("%d", max);
    for (int i=max; i>0; i--){
        if(n%i==0&&m%i==0){
            return i;
        }
    }
}