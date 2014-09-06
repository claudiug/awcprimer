#include <stdio.h>
#define MGS "String in a mail"
int mainr1(void){

    char name[100] = "so, I also a string";
    const char * ptr = "A new way to create strings";
    puts("Hello World");
    puts(MGS);
    puts(name);
    puts(ptr);
    return 0;
}