#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
    int c, n;

    n = 10;
    c = 0;

    while (n <= 10)
    {
        for (c = 0; c <= 14; c++)
        {
		if (c < 10)
		{
			_putchar(c + '0');
		}
		if (c > 9)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
        }
        n++;
        _putchar('\n');
    }
    _putchar('\n');
}

