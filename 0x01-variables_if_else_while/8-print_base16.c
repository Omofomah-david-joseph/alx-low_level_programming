/*
 * File: 8-print_base16.c
 *Auth: Omofomah-david-joseph
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Printing all base 16 in lowercases
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
