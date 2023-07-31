#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int b = 0;
	int h = size;

	if (size > 0)
	{
		for (h = size; h > 0; h++)
		{
			for (b = 1; b <= size;; b++)
			{
				if (b >= h)
				{
					_putchtchar('#');
				}
				else
				{
					_putchar(' ');
				}
			_putchar('\n');
			}
		}
	}

	else
	{
		_putchar('\n');
	}
}
