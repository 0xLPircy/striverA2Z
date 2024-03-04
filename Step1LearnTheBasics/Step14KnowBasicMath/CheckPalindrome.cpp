// Coding ninjas
bool palindrome(int n)
{
    // Write your code here
    int ans, x=n;
    ans= x%10;
        x=(x-x%10)/10;

    while (x!=0){
        ans = (ans*10) + x%10;
        x=(x-x%10)/10;
    }
    if(ans==n){
        return 1;
    }else{
        return 0;
    }
}
// LEETCODE
class Solution {
public:
    bool isPalindrome(int x) {
            if(x<0){
        return false;
    }
        double ans=0; 
        int n=x;
    while (n!=0){
        ans = (ans*10) + n%10;
        n=(n-n%10)/10;
    }
     if(ans>2147483647){
            return 0;
        } else if(ans==x){
        return 1;
    }else{
        return 0;
    }
    }
};