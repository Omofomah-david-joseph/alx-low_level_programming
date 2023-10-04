#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *create_array - creates char array and place a specific char
 * in it
 * @c: specific chr array created
 * @size: array size created
 *
 * Return: NULL if size = 0, Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
