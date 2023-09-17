#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - checks for numbers between 0 -9
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int c;
	
	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
