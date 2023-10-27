#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: binary string to be converted
 * Return: The decimal value of the binary string, or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int base = 2;
	int len, a;

	if (b == NULL)
		return (0);
	len = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0); /* Invalid binary string*/
		len++;
	}
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - '0');
	}
	for (a = 0; a < len; a++)
	{
		sum = sum * base + (b[a] - '0');
	}
	return (sum);
}
