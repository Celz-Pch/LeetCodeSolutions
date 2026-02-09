/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 3467
*/

int *my_sort(int *return_array, int numsSize) {
    int i, j, temp = 0;

    for (; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (return_array[i] > return_array[j]) {
                temp = return_array[j];
                return_array[j] = return_array[i];
                return_array[i] = temp;
            }
        }
    }
    return return_array;
}

int* transformArray(int* nums, int numsSize, int* returnSize) {
    int i = 0;
    int *return_array = malloc(sizeof(int) * numsSize);

    for (; i < numsSize; i++) {
        if (nums[i]%2 == 0)
            return_array[i] = 0;
        if (nums[i]%2 == 1)
            return_array[i] = 1;
    }
    *returnSize = numsSize;
    return_array = my_sort(return_array, numsSize);
    return return_array;
}
