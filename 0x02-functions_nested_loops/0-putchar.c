#include "main.h"

/**
 * main - Entry point of my code
 *
 * Return: Always 0
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
