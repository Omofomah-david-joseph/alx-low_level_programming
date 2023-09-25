#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the prefix to be measured
 * Return: the number of bytes in s which
 * consist only of bytes from accept
 */
unsigned in _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accep[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
