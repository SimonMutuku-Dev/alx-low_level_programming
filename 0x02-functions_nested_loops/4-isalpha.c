#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 * @n: The character value
 * Return: 1 if true, 0 if otherwise
 */

int _isalpha(char c, int n)
{
	n = c - '0';

		if (n == 97 && n <= 122)
		{
			return (1);
		}
		else if (n >= 65 && n <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
