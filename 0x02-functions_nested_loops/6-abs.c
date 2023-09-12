#include "main.h"

/**
 * _abs - compute the absolute value of an interger
 * @n: listed numbers
 * Return: Absolute value of interger
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
