/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 485
*/

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i = 0;
    int count = 0;
    int tmp = 0;

    for (i = 0; i < numsSize; i++) {
        if (nums[i] == 1)
            tmp++;
        if (nums[i] == 0 && tmp > count) {
            count = tmp;
            tmp = 0;
        } else if (nums[i] == 0 && tmp <= count) {
            tmp = 0;
        } else if (i == numsSize - 1 && tmp > count) {
            count = tmp;
        }
    }
    return count;
}