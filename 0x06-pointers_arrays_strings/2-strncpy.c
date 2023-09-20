#include "main.h"
#include <stdio.h>

/**
 * *_strncpy -copies a string
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of the second string
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0; z < n && src[z] != '\0'; z++)
		*(dest + z) = *(src + z);
	for ( ; z < n; z++)
		*(dest + z) = '\0';
	return (dest);
}
