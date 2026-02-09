/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 744
*/

char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int i = 0;

    for (; i < lettersSize; i++) {
        if (target < letters[i])
            return letters[i];
    }
    return letters[0];
}