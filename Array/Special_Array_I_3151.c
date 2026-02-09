/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 3151
*/

#include <stdbool.h>

bool isArraySpecial(int* nums, int numsSize) {
    int i = 0;

    if (numsSize == 1)
        return true;
    for (i = 0; i < numsSize - 1; i++) {
        if ((nums[i] % 2 == 0 && nums[i + 1] % 2 == 0)
        || (nums[i] % 2 != 0 && nums[i + 1] % 2 != 0))
            return false;
    }
    return true;
}
