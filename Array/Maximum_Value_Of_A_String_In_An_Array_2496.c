/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 2496
*/

#include <string.h>
#include <stdbool.h>

int is_only_nb(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] < 48 || str[i] > 57)
            return false;
    }
    return true;
}

int maximumValue(char** strs, int strsSize) {
    int i = 0;
    int max_value = 0;

    for (; i < strsSize; i++) {
        if (is_only_nb(strs[i]) && max_value < atoi(strs[i]))
            max_value = atoi(strs[i]);
        else if (!is_only_nb(strs[i]) && max_value < strlen(strs[i]))
            max_value = strlen(strs[i]);
    }
    return max_value;
}