#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: pointer to bit to be manipulated
 * @index: bit position to be manipulated
 * Return: 1 if worked; 0 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
