//
//  adr.c
//  awcprimer
//
//  Created by claudiu on 9/6/14.
//  Copyright (c) 2014 de.claudiu. All rights reserved.
//

#include <stdio.h>
#define MSG "Je suis tre special"
int main12w(void)
{
    char ar[] = MSG;
    const char *pt = MSG;
    printf("memory address of %p\n", "Je suis tre special");
    printf("adress ar : %p\n", ar);
    printf("address for pointer %p\n", pt);
    printf("adress for MSG %p\n", MSG);
    return 0;
}