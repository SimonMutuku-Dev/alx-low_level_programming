#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int b = size;
	int h = size;

	if (size > 0)
	{
		while (h <= size)
		{
			if (size > 1)
			{
				while (b <= size)
				{
					_putchar(' ' * size);
					b++;
				}
				_putchar('#' * h);
				h++;
				_putchar('\n');
			}
			if (size = 1)
			{
				_putchar('#');
			}
		}
	}

	else
	{
		_putchar('\n');
	}
}