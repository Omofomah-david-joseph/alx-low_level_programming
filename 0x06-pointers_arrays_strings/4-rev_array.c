#include "main.h"
#include <stdio.h>

/**
 * reverse_array -returns the reverse of an array
 * @a: array to be compared
 * @n: size of the array
 * Return: Reversed Array
 */
void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;

	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
