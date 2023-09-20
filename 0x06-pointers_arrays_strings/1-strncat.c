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
	int A, B;

	A = 0;
	B = 0;

	while (*(dest + A) != '\0')
		A++;
	while (*(src + B) != '\0' && A < 97 && B < n)
	{
		*(dest + A) = *(src + B);
		A++;
		B++;
	}
	*(dest + A) = '\0';
	return (0);
}
