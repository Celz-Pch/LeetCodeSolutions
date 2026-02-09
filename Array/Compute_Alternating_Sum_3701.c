/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 3701
*/

int alternatingSum(int* nums, int numsSize) {
    int i = 0;
    int result = 0;

    for (; i < numsSize; i++) {
        if (i%2 == 0) {
            result += nums[i];
        }
        if (i%2 == 1) {
            result -= nums[i];
        }
    }
    return result;
}