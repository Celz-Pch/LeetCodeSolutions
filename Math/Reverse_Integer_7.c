#include <limits.h>

int reverse(int x){
    long reversed = 0;
    int temp = x;

    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    if (reversed > INT_MAX || reversed < INT_MIN)
        return 0;
    return (int)reversed;
}
