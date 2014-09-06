#include <stdio.h>

#define SIZE 4

int maino(void)
{
    short dates[SIZE];
    short * pti; //pointer
    short index;
    double bills[SIZE];
    double * pti1; //another pointer;
    pti = dates;
    pti1 = bills;
    printf("%23s %15s\n", "short", "double");
    for(index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n", index, pti+index, pti1 + index);
    return 0;
}