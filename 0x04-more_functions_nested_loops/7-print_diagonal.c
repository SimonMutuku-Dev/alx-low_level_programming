#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * Return: void
 */

void print_diagonal(int n)
{
	int i, s;

	if (i > 0)
	{
		while (i <= n)
		{
			while (s <= n)
			{
				_putchar(' ');
				s++;
			}
			_putchar('\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}