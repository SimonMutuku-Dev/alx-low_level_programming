#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 * Return: 0 if success, others if not
 */

int main(void)
{
	int n;
	int o;
	int p;

	for (n = 48; n <= 55; n++)
	{
		for (o = 48; o <= 56; o++)
		{
			if (o > n)
			{
				for (p = 48; p <= 57; p++)
				{
					if (p > o)
					{
						putchar(n);
						putchar(o);
						putchar(p);
						if (n != 55 || o != 56 || p != 57)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

putchar('\n');
return (0);
}
