/*
 * File: 102-print_comb5.c
 * Auth: Omofomah-david-joseph
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - printing all possible combinations of two digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, u;

	for (a = 0; a < 99; a++)
	{
		for (u = a + 1; u < 100; u++)
		{
			putchar((a / 10) + '0');
			putchar(a + '0');
			putchar(' ');
			putchar((u / 10) + '0');
			putchar(u + '0');
			if (a == 98 && u == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
