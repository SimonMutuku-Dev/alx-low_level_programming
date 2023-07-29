#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: character to check
 * 
 * Return: 1 if it is, 0 if it's not
 */

int _islower(int c)
{
	if ((!(c <= 48)) || (!(c >= 58)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

