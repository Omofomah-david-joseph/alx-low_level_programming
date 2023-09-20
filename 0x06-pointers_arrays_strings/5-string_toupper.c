#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - changes all lowercases in string to uppercases
 * @s: Analysed string
 *
 * Return: strings with uppercases
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
