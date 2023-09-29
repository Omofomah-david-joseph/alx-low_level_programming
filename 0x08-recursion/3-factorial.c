#include "main.h"

/**
 * factorial - gives the factorial of a number
 * @n: number to be studied
 * Return: -1 (error) if n is lower than 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
