#include "lists.h"
void comefirst(void)__attribute__((constructor));

/**
 * comefirst - prints a string before the main function is executed
 */
void comefirst(void)
{
	printf("You're beat! and yet, you must allow \n");
	printf("I bore my house upon my back!\n");
}
