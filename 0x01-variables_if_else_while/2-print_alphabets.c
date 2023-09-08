/*
 * File: 2-print_alphabet.c
 * Auth: Omofomah-david-joseph
 */

#include <stdio.h>

/**
 * main - Printing the alphabets in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{       
        char letter;
        for(letter = 'a'; letter <= 'z'; letter ++)
                putchar(letter);

        putchar('\n');
        return (0);
}
