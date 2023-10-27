#include "main.h"

/**
 * get_bit - function that gives a bit value for a specified index
 * @n: bit needed
 * @index: index of the bit insterested in
 * Return: value of bit at index specified
 * or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
