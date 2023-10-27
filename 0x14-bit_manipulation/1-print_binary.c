#include "main.h"

/**
 * print_bi - prints binary representation of a number
 * recussively
 * @n: number to print in binary
 * Return: binary representation 
 */
void print_bi(unsigned long int n)
{
	if (n == 0) /*based argument*/
		return;
	print_bi(n >> 1); /* keeps dividing n by 2*/

	if ((n & 1) == 1)
		putchar('1');
	if ((n & 1) == 0)
		putchar('0');
}

/**
 * print_binary - prints binaty representation of a number
 * @n: number inputed
 * Return: binary representation of n
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
	{
		print_bi(n);
	}
}
