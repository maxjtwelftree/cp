/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    // c practice for matlab and c
    // need to validate with a pointer to our return size, and validate it outside of the signature
    *returnSize = 2;
    int n = numsSize;

    // and then need to init a vector of size two that is malloced
    int* arr = malloc(2 * sizeof(int));

    for (int i = 0; i < n; i++) {
        arr[0] = i;
        for (int j = 0; j < n; j++) {
            arr[1] = j;
            if (nums[i] + nums[j] == target && i != j) {
                return arr;
            }

        }
    }
    
    return (int*) -1;

}