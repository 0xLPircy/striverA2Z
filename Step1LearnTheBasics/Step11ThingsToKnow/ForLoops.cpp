
#include<bits/stdc++.h>
using namespace std;

// FIRST APPROACH
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        if(n<3&&n>0){
                printf("%d", 1);
                return 0;
        }
        int ans[n];
        ans[0]=1;
        ans[1]=1;
        for (int i=0; i<n; i++){
                if(i<2){
                        continue;
                }
                ans[i]= ans[i-1]+ans[i-2];
        }
        printf("%d", ans[n-1]);
}

// 2ND
int fib(int n){
        if(n<2){
                return 1;
        }
        int ans = fib(n-1) + fib(n-2);
        return ans;
}

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        if(n<3&&n>0){
                printf("%d", 1);
                return 0;
        }
        int ans = fib(n-1);
        printf("%d", ans);
}