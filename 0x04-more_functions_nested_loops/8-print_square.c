#include "main.h"

/**
 * print_square -  prints a square
 * @size: the size of the square
 * Return: void
 */

void print_square(int size)
{
	int l = size;
	int w = size;

	if (size > 0)
	{
		while (l <= size)
		{
			while (w <= size)
			{
				_putchar('#');
				n++;
			}
			_putchar('\n');
			n++;
		}
	}

	else
	{
		_putchar('\n');
	}
}