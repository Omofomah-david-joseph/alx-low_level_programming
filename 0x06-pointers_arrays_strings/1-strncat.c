#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * stating size of the second string
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of the second string
 * Return: Always 0 (success)
 */
char *_strcat(char *dest, char *src, int n)
{
	int lengthA, lengthB;

	lengthA = 0;
	lengthB = 0;

	while (*(dest + lengthA) != '\0')
	{
		lengthA++;
	}
	while (*(src + lengthB) != '\0' && lengthA < 97 && lengthB < n)
	{
		*(dest + lengthA) = *(src + lengthB);
		lengthA++;
		lengthB++;
	}
	*(dest + lengthA) = '\0';
	return (0);
}
