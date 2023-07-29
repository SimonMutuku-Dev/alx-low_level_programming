#include "main.h"

/**
 * times_table - prints the times table up to 9
 */

void times_table(void)
{
	int m, n, y;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			y = m * n;


			if (n == 0 && m == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			if (m != 0 && n != 0 && y < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(y + '0');
			}
			if (y >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((y/10) + '0');
				_putchar((y%10) + '0');
			}
			
		}
		_putchar('\n');
	}
}

