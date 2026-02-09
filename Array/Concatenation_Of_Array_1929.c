/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 1929
*/

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int i, stock = 0;
    int *return_int = malloc(sizeof(int) * (numsSize * 2));

    for (i = 0; i < numsSize; i++) {
        return_int[stock] = nums[i];
        stock++;
    }
    for (i = 0; i < numsSize; i++) {
        return_int[stock] = nums[i];
        stock++;
    }
    *returnSize = numsSize * 2;
    return return_int;
}