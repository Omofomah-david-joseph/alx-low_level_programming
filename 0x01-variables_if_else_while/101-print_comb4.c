/*
 * File: 101-print_comb4.c
 * Auth: Omofomah-david-joseph
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Printing all possible combinations of three digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, o, u;

	for (i = 0; i < 10; i++)
	{
		for (o = i + 1; o < 10; o++)
		{
			for (u = o + 1; u < 10; u++)
			{
				putchar(i + '0');
				putchar(o + '0');
				putchar(u + '0');
				if (i == 7 && o == 8 && u == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
