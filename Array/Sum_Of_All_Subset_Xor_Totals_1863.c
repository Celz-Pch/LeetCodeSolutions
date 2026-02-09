/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 1863
*/

int subsetXORSum(int* nums, int numsSize) {
    int result = 0;
    int allXOR = 0;

    for (int i = 0; i < numsSize; i++) {
        allXOR |= nums[i];
    }

    result = allXOR * (1 << (numsSize - 1));
    return result;   
}