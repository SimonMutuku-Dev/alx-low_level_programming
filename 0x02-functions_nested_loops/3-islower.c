#include <stdio.h>
#include "main.h"

/**
 *  * _islower - checks for lowercase character
 *  @c: Character to be printed out
 *  @n: Character value
 *   * Return: 1 if true, 0 if otherwise
 */

int _islower(char c, int n)
{
	n = c - '0';

	if (n == 97 && n <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
