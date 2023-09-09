/*
 * File: 100-print_comb3.c
 * Auth: Omofomah-david-joseph
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Printing all possible different combination of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, o;

	for (i = 0; i < 10; i++)
	{
		for (o = i + 1; o < 10; o++)
		{
			putchar(i + '0');
			putchar(o + '0');
			if (i == 8 && o == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
