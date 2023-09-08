/*
 * FILE: 0-Positive_or_negative.C
 * Auth: Omofomah-david-joseph
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print a random number and indicate if its positive or negative
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if ( n > 0 )
               printf("%d is positive\n", n);
        else if ( n < 0 )
                printf("%d is negative\n", n);
        else
                printf("%d is zero\n", n);
        return (0);
}
