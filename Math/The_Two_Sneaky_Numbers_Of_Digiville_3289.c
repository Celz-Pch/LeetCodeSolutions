int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int *return_array = malloc(sizeof(int) * numsSize);
    int found[numsSize];
    int start = 0;
    
    for (int i = 0; i < numsSize; i++) {
        found[i] = 0;
    }
    
    for (int i = 0; i < numsSize; i++) {
        if (found[nums[i]] == 0) {
            found[nums[i]] = 1;
        } else if (found[nums[i]] == 1) {
            return_array[start] = nums[i];
            start++;
            found[nums[i]] = 2;
        }
    }
    
    *returnSize = start;
    return return_array;
}
