#include "main.h"

/**
 * _strlen_recursion - function that returns length of string
 * @s: string to be measured
 * Return: String length as int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
