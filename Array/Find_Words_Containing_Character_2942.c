/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 2942
*/

int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int i = 0;
    int j = 0;
    int return_stock = 0;
    int *return_value = malloc(sizeof(int) * wordsSize);
    
    for (i = 0; i < wordsSize; i++) {
        for (j = 0; words[i][j] != '\0'; j++) {
            if (words[i][j] == x) {
                return_value[return_stock] = i;
                return_stock++;
                break;
            }
        }
    }
    *returnSize = return_stock;
    return return_value;
}
