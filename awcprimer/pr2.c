#include <stdio.h>

void print_numbers(int nr);

int main(void)
{
    printf("gimee a numbe bro:\n");
    int number;
    scanf("%d", &number);
    print_numbers(number);
    return 0;
}

void print_numbers(int number)
{
    for (int i = number; i <= number + 10; i++) {
        printf("%d\t", i);
    }
}
