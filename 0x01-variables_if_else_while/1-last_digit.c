/*
 * File: 1-last_digit.c
 * Auth: Omofomah-david-joseph
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/**
 * main -Prints a random number and evaluates if its greater than 5, equals to 0 or less than 6 but not 0; then writes an expression
 *
 * Return: Always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if( n > 5 )
		printf("Last digit of %d is %d and is greater than 5\n",n, n % 10);
	else if( n == 0)
		printf("Last digit of %d is %d and is 0\n",n ,n % 10);
	else ( n < 6 && n != 0);
		printf("Last digit of %d is %d and is less than 6 and not 0\n",n, n % 10);
	return (0);
}
