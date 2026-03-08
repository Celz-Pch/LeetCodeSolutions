#include <stdbool.h>

int reverse_number(int x) {
    unsigned int tmp = x;
    unsigned int reserse_nbm = 0;

    while (tmp > 0) {
        reserse_nbm += tmp%10;
        tmp = tmp / 10;
        if (tmp > 0)
            reserse_nbm = reserse_nbm * 10;
    }
    return reserse_nbm;
}

bool isPalindrome(int x) {
    int reverse_nbm = reverse_number(x);

    return x == reverse_nbm;
}
