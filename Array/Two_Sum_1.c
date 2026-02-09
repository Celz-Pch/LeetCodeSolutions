/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 1
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;
    int* stock = malloc(sizeof(int) * 2);

    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                stock[0] = i;
                stock[1] = j;
                *returnSize = 2;
                return stock;
            }
        }
    }
    *returnSize = 0;
    return malloc(sizeof(int) * 0);
}