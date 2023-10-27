#include "main.h"

/**
 * binary_to_uint - coonverts binary to integer
 * @b: nunber pointing to  a set of characters
 * Return: converted number
 * 0 if there is one or more chars in the string b that is not 0 or 1
 * 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, a, j, sum, pow;
	int base;

	sum = 0;
	pow = 1;
	base = 2;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);
	}
	for (a = 0; b[a] != '0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
		return (0);
		for (j = len - 1; j > 0; j--)
		pow = pow * base;
		sum = sum + (pow * (b[a] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}
