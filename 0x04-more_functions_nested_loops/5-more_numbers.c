#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
    int c, n;

    n = 10;

    while (n <= 10)
    {
        for (c = 0; c = 14; c++)
        {
            _putchar(c + '0');
        }
        n++;
        _putchar('\n');
    }
    _putchar('\n');
}