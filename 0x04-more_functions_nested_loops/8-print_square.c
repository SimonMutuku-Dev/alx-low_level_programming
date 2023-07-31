#include "main.h"

/**
 * print_square -  prints a square
 * @size: the size of the square
 */

void print_square(int size)
{
	int l = 0;
	int w = 0;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			_putchar('#');
			for (w = 2; w <= size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}

