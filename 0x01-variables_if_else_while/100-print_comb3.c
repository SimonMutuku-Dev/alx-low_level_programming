#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints two-number combinations
 * Return: 0 if true, others if not
 */

int main(void)
{
int t;
int d;

for (t = 48; t <= 56; t++)
{
	for (d = 49; d <= 57; d++)
	{
		if (d > t)
		{
			putchar(t);
			putchar(d);
			if (t != 56 || d != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}	
	}
}
putchar('\n');
return (0);
}
