/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 1470
*/

int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    
    int i;
    for (i = 0; i < n; i++) {
        result[2 * i] = nums[i];
        result[2 * i + 1] = nums[i + n];
    }
    
    *returnSize = numsSize;
    return result;
}
