/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double *return_array = malloc(sizeof(double) * 2);

    return_array[0] = celsius + 273.15;
    return_array[1] = celsius * 1.80 + 32.00;
    *returnSize = 2;
    return return_array;
}