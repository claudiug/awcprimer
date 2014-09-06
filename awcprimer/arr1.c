#include <stdio.h>

int mains(void)
{
    const int numbers[10] = {1,2,3,4,5,6,7,8,9,0};
    printf("Size of numbers is %lu\n", sizeof(numbers));
    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
        printf("%2d\t", numbers[i]);
    return 0;
}