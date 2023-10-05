#include "main.h"
#include <stdio.h>

/**
 * main - prints manes of a program
 * @argc: number of arguments used
 * @argv: array of argurements
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	
	return (0);
}
