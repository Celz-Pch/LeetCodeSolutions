/*
** EPITECH PROJECT, 2026
** LeetCode
** File description:
** 2798
*/

int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int count = 0;
    int i = 0;
    
    for (; i < hoursSize; i++) {
        if (hours[i] == target || hours[i] > target)
            count++;
    }
    return count;
}