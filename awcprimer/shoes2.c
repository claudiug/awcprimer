//
//  shoes2.c
//  awcprimer
//
//  Created by claudiu on 9/6/14.
//  Copyright (c) 2014 de.claudiu. All rights reserved.
//

#include <stdio.h>
#define ADJUST 7.31;
int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;
    printf("Shoe size men:\t");
    shoe = 3.0;
    while (shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches", shoe, foot);
        shoe += 1.0;
    }
    printf("Bye\n");
    return 0;
}
