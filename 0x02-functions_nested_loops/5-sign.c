#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: listed number
 * Return: 1 for positve numbers, -1  for negative numbers or 0 for anything else
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	if (n > 0)
	{
		_putchar(43);
		return (+1);
	}
	else
	{
		_putchar(48);
		return(0);
	}
}
