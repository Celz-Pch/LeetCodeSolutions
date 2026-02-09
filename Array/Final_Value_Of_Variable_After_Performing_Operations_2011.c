/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** Problem 2011
*/

int my_strcmp(char *str1, char *str2) {
    int i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0')
            return 0;
        i++;
    }
    return (str1[i] - str2[i]);
}

int finalValueAfterOperations(char** operations, int operationsSize) {
    int x = 0;

    for (int i = 0; i < operationsSize; i++) {
        if (my_strcmp(operations[i], "--X") == 0)
            --x;
        if (my_strcmp(operations[i], "X--") == 0)
            x--;
        if (my_strcmp(operations[i], "++X") == 0)
            ++x;
        if (my_strcmp(operations[i], "X++") == 0)
            x++;
    }
    return x;
}