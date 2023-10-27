#include "main.h"

/**
 * clear_bit -  function that sets bit value to 0
 * @n: pointer to bit mainipulated
 * @index: index of bit manipulaated
 * Return: 1 if worked; -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	mask = 1;
	mask = mask << index;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;
	return (1);
}
