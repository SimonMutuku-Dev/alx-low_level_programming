#include <unistd.h>
#include "main.h"

/**
 *  * _islower - checks for lowercase character
 *  @c: Character to be printed out
 *  @n: Character value
 *   * Return: 1 if true, 0 if otherwise
 */

int _islower(int c)
{
	c = 'a';

	if (c == 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
