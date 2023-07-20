#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 * @c: Character to be printed
 * Return: 0 if true, others if not
 */

int print_alphabet(char c)
{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
_putchar('\n');
return (0);
}
