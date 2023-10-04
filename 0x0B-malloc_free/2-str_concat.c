#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: string concatenated
 *
 * Return: pointer to new allocated space in memory
 * having s1 and then s2 contents
 * NULL for an empty string
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x, y;

	x = y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;
	while (s2[y] !='\0')
		y++;

	concat = malloc(sizeof(char) * (x + y + 1));

	if (concat == NULL)
		return (NULL);

	x = y = 0;

	while (s1[x] != '\0')
	{
		concat[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		concat[x] = s2[y];
		x++, y++;
	}
	concat[x] = '\0';
	return (concat);
}
