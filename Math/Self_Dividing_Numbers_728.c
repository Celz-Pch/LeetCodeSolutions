int my_intlen(int i)
{
    int count = 0;

    if (i == 0)
        return 1;

    while (i > 0) {
        i = i / 10;
        count++;
    }
    return count;
}

int self_dividing(int i)
{
    int tmp = i;

    while (tmp > 0) {
        int digit = tmp % 10;

        if (digit == 0 || i % digit != 0)
            return 0;

        tmp = tmp / 10;
    }
    return 1;
}

int* selfDividingNumbers(int left, int right, int* returnSize) {
    int *array = malloc(sizeof(int) * (right - left + 1));
    int k = 0;

    for (int i = left; i <= right; i++) {
        if (self_dividing(i)) {
            array[k++] = i;
        }
    }

    *returnSize = k;
    return array;
}