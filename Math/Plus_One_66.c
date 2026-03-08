/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int my_intlen(int nb)
{
    if (nb == 0) return 1;
    int count = 0;
    while (nb > 0) {
        nb /= 10;
        count++;
    }
    return count;
}

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int i;

    for (i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }
    int *result = malloc(sizeof(int) * (digitsSize + 1));
    result[0] = 1;
    for (i = 1; i <= digitsSize; i++)
        result[i] = 0;
    *returnSize = digitsSize + 1;
    return result;
}
