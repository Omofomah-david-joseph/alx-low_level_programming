#include "main.h"

/**
 * _isalpha - checks for alphabetical characters
 * @c: listed characters
 * Return: 1 for alphabetical characters, 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
