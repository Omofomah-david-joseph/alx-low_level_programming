#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
	char ab;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[i] != '\0')
	{
		len++;
	}
	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		ab = s[i];
		s[i] = s(len);
		s(len - 1) = ab;
	}
}
