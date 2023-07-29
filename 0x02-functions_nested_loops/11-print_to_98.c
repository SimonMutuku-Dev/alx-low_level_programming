#include "main.h"

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n <= 0)
		{
			while (n <= 9)
			{
				if (n <= 0)
				{
					if (n < -9)
					{
						_putchar('-');
						_putchar((n / 10) + '0');
						_putchar((n % 10) + '0');
						_putchar(',');
						_putchar(' ');
						n++;
					}
					if (n > -9 && n < 0)
					{
						_putchar('-');
						_putchar(n + '0');
						_putchar(',');
						_putchar(' ');
						n++;
					}
					if (n = 0)
					{
						_putchar(n + '0');
						_putchar(',');
						_putchar(' ');
						n++;
					}
				}
			}
			while (n > 9 && n != 98)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
				n++;
			}
		}

		if (n > 98 && n != 98)
		{
			if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar(((n % 100) / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
				n--;
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
				n--;
			}
		}

		if (n == 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
	_putchar('\n');
}