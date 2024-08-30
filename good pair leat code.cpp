int numIdenticalPairs(int* nums, int numsSize) {
    int haha=0;
 for(int i=0;i<numsSize;i++){
    for(int j=i;j<numsSize;j++){
        if(nums[i]==nums[j] && i<j){
            haha++;
        }
    }
 }
    return haha;
}