#include "main.h"
#include <stdio.h>

/**
 * main - prints all argument it receives
 * @argc: number of arguments
 * @argv: arraay of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0, a < argc, a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
