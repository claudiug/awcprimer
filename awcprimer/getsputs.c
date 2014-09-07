
#include <stdio.h>
#define STRLEN 20
int mainz3(void)
{
    //warning: this program uses gets(), which is unsafe.
    char words[STRLEN];
    printf("Enter a name:\n");
    fgets(words, STRLEN, stdin);
    printf("You enter: %s\n", words);
    fputs("read me\n", stdout);
    return 0;
}