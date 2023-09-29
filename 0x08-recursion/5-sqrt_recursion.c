#include "main.h"

/* first create a power function*/
/**
 * power_operator - gives the sqaure root of a number
 * @a: number to be inputed
 * @b: sqaure
 * Return: square root
 */
int power_operator(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (power_operator(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (power_operator(n, 0));
}
