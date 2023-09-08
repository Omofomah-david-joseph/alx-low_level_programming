/*
 * FILE: 1-last_digit.c
 * Auth: Omofomah-david-joseph
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print a random number and indicate if its greater than 5, euqals 0 or less than 5 but not equals 0
 *
 * Return: Always 0 (success)
 */
int main(void)      
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
                printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
        else if (n < 6 && n != 0)
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
        else
                printf("Last digit of %d is %d and is 0\n", n, n % 10);
        return (0);
}
