vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    for(int i = 0; i<n; i++){
        // printf("\ni:%d\nBefore nums[i]:%d ", i, nums[i]);
        if(i == (n-1-i)|| i == (n-i)){
            break;
        }
        int temp = nums[i];
        nums[i] = nums[n-1-i];
        nums[n-1-i] = temp;
        // printf("i:%d, n-1-i:%d\n", nums[i], nums[n-1-i]);
        // printf("After:%d", nums[i]);
    }
    // for(int i =0; i<n; i++){
    //     printf("%d", nums[i]);
    // }
    // printf("\n");
    return nums;
}
// NOT RCURSIVE