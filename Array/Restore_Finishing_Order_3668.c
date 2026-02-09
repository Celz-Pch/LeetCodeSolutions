/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 3668
*/

int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    int i, j, stock = 0;
    int *return_int = malloc(sizeof(int) * (friendsSize));

    for (i = 0; i < orderSize; i++) {
        for (j = 0; j < friendsSize; j++) {
            if (order[i] == friends[j]) {
                return_int[stock] = friends[j];
                stock++;
            }
        }
    }
    *returnSize = friendsSize;
    return return_int;
}
