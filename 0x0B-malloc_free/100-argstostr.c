#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *argstostr - funtion that concatenates all arguments in a program
 * @ac: first argurement
 * @av: second argurement
 *
 * Return: pointer to new string
 * NULL if fails
 * NULL if ac == 0
 * NULL if av ==NULL
 */
char *argstostr(int ac, char **av)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			l++;
	}
l += ac;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
	return (NULL);
for (a = 0; a < ac; a++)
{
	for (b = 0; av[a][b]; b++)
	{
		str[c] = av[a][b];
		c++;
	}
	if (str[c] == '\0')
	{
		str[c++] = '\n';
	}
}
return (str);
}
