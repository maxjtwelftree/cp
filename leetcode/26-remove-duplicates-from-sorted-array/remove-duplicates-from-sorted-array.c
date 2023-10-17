int removeDuplicates(int* nums, int numsSize){
    int cnt = 0;
   
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i-1]) {
            cnt++;
        }
        else {
            nums[i-cnt] = nums[i];
        }
    }
    return numsSize-cnt;
}