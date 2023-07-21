#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase
 * @c: Character to be printed
 * @n: Character value
 * Return: 0 if true, others if not
 */

void print_alphabet_x10(void)
{
	char c;
	int n;
	n = 0;
	for (c = 'a'; c <= 'z'; c++)
	{
		while (n <= 10)
		{
		putchar(c);
		putchar('\n');
		}
	}
return (0);
}
