/*
 * File: 5-print_numbers.c
 * Auth: Omofomah-david-joseph
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints all single digits of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}   
