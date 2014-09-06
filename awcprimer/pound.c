#include <stdio.h>

void pound(int n); // ANSI function prototype declaration

int main4(void)
{
    int times = 5;
    char ch = '!'; //ANSI code is 33. int ch = 33;
    float f = 6.0f;
    pound(times);
    pound(ch);
    pound(f);
    return 0;
}

void pound(int n)
{
//    while (n-- > 0) {
//        printf("#");
//    }
    for (int i = 0; i < n; n--) {
        printf("#");
    }
    printf("\n");
}