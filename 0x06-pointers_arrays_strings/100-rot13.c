#include "main.h"
#include <stdio.h>

/**
 * *rot13 - encoder rot13
 * @s: pointer to string
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	intj;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqurstuvwyz";
	char datarot[] = "NMOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
