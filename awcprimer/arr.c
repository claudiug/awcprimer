
#include <stdio.h>
#define MONTHS 12

int mainA(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 30, 31, 32, 3};
    int index;
    for (index = 0; index < MONTHS; index++)
        printf("Month %d has %2d days\n", index+1, days[index]);
    
    return 0;
}