//
//  getsputs.c
//  awcprimer
//
//  Created by claudiu on 9/6/14.
//  Copyright (c) 2014 de.claudiu. All rights reserved.
//

#include <stdio.h>
#define  STRLEN 20
int main(void)
{
    //warning: this program uses gets(), which is unsafe.
    char words[STRLEN];
    printf("Enter a name:\n");
    gets(words);
    printf("You enter: %s\n", words);
    return 0;
}