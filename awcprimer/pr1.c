#include <stdio.h>

int convert_time(int r);

int main7(void)
{
    printf("Tell me a number and I will tell you time\n");
    int result = 0;
    scanf("%d", &result);
    convert_time(result);
    printf("Result for number %d is %d\n", result,  convert_time(result));
    return 0;
}

int convert_time(int r)
{
    int result = 0;

    while (r <= 0) {
        return r;
    }
    if (r > 60) {
        result = r / 60;
        return result;
    }else{
        result = 60 / r;
        return result;
    }
}