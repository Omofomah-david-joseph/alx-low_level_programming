/*
 * File: 4-print_alphabt.c
 * Auth: Omofomah-david-joseph
 */

#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercases leaving out q and e
 *
 * Return: Always0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
			putchar(letter);

	putchar('\n');
	return (0);
}
