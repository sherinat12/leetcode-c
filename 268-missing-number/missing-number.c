int missingNumber(int* nums, int numsSize) {
    int n= numsSize;
    int expsum=n*(n+1)/2;
    int actsum=0;
    for(int i=0;i<n;i++){
        actsum+=nums[i];
    }
    return expsum-actsum;

    
}