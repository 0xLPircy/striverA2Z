// LEETCODE
class Solution {
public:
    int reverse(int x) {
        
        double ans=x%10;
    x = (x - x%10)/10;
    while(x!=0){
        ans = (ans*10)+(x%10);
        
        x = (x - x%10)/10;
    }
    if(ans>2147483647||ans<-2147483647){
            return 0;
        }
    return ans;
    }
};