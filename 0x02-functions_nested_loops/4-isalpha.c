#include <stdio.h>
#include "main.h"

int _isalpha(int c)
{
	c = 'U';

	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else if (c >= 65 || c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}