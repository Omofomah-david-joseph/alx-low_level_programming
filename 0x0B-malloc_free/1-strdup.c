#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_strdup - function returns a new space to momory
 * having copy of the string given
 * @str: string parameter given
 *
 * Return: a pointer to new string dublicate,
 * NULL if string is NULL
 * NULL if no sufficient memory space
 */
char *_strdup(char *str)
{
	char *abc;
	int i, r;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	abc = malloc(sizeof(char) * (i + 1));
	if (abc == NULL)
		return (NULL);
	r = 0;
	for (r = 0; str[r]; r++)
		abc[r] = str[r];
	return (abc);
}

