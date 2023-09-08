/*
 * File: 2-print_alphabet.c
 * Auth: Omofomah-david-joseph
 */

#include <stdio.h>

/**
 * main - Print alphabets in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
