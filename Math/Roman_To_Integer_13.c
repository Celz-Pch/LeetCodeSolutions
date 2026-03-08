typedef struct roman_info {
    char letter;
    int cor_nbm;
} roman_info_t;

int romanToInt(char* s) {
    const roman_info_t roman_info[] = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int j = 0;
    int result = 0;

    for (j = 0; s[j] != '\0'; j++) {
        int value = 0;
        for (int i = 0; i < 7; i++) {
            if (s[j] == roman_info[i].letter) {
                value = roman_info[i].cor_nbm;
                break;
            }
        }
        if ((s[j] == 'I' && (s[j + 1] == 'X' || s[j + 1] == 'V')) ||
            (s[j] == 'X' && (s[j + 1] == 'L' || s[j + 1] == 'C')) ||
            (s[j] == 'C' && (s[j + 1] == 'D' || s[j + 1] == 'M'))) {
            result -= value;
        } else {
            result += value;
        }
    }
    return result;
}
