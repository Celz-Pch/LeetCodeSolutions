/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 27
*/

void buble_sort(int *nums, int size)
{
    int i = 0;
    int j = 0;
    int temp = 0;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (nums[j] < nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

int count(int *nums, int size)
{
    int i = 0;
    int result = size;

    for (i = 0; i < size; i++) {
        if (nums[i] == -1)
            result--;
    }
    return result;
}

int removeElement(int* nums, int numsSize, int val) {
    int i = 0;

    for (i = 0; i < numsSize; i++) {
        if (nums[i] == val) {
            printf("%d\n", nums[i]);
            nums[i] = -1;
        }
    }
    buble_sort(nums, numsSize);
    return count(nums, numsSize);
}