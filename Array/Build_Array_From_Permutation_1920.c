/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** Problem 1920
*/

int* buildArray(int* nums, int numsSize, int* returnSize) {
    int i, j, stock = 0;
    int *return_int = malloc(sizeof(int) * (numsSize));

    for (; i < numsSize; i++) {
        return_int[stock] = nums[nums[i]];
        stock++;
    }
    *returnSize = numsSize;
    return return_int;
}