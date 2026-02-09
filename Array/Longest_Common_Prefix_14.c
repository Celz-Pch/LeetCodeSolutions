/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 14
*/

int my_strlen(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++);
    return i;
}

char* longestCommonPrefix(char** strs, int strsSize) {
    int i, j;
    int minLength = my_strlen(strs[0]);
    for (i = 1; i < strsSize; i++) {
        int len = my_strlen(strs[i]);
        if (len < minLength) {
            minLength = len;
        }
    }
    char* prefix = (char*)malloc((minLength + 1) * sizeof(char));
    for (i = 0; i < minLength; i++) {
        char currentChar = strs[0][i];
        for (j = 1; j < strsSize; j++) {
            if (strs[j][i] != currentChar) {
                prefix[i] = '\0';
                return prefix;
            }
        }
        prefix[i] = currentChar;
    }
    prefix[minLength] = '\0';
    return prefix;
}