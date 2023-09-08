/*
 * File: 5-print_numbers.c
 * Auth: Omofomah-david-joseph
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints all single digits of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}	
