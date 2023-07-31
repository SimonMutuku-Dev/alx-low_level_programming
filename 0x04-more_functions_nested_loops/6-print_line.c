#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (i > 0)
		{
		_putchar('_');
		}
		n++;
	}
	_putchar('\n');
}

