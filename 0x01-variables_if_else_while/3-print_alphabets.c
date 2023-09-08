/*
 * File: 3-print_alphabet.c
 * Auth: Omofomah-david-joseph
 */

#include <stdio.h>

/**
 * main -
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	for(letter = 'a'; letter <= 'z'; letter ++)
		putchar(letter);
	for(letter = 'A'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
