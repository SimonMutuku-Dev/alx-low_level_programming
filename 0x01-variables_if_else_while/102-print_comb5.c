#include <stdio.h>

/**
 * main - Prints all combinations of two two-digit numbers
 * Return: 0 if success, others if not
 */

int main(void)
{
	int m, n, o, p;

	for (m = 48; m < 58; m++)
	{
		for (n = 48; n < 58; n++)
		{
			if (n >= m)
			{
				if (m != 58 || n != 58)
				{
					for (o = 48; o < 58; o++)
					{
						for (p = 48; p < 58; p++)
						{
							if (p > o)
							{
								putchar(m);
								putchar(n);
								putchar(' ');
								putchar(o);
								putchar(p);
								if (o != 56 || p != 57 || m != 57 || n != 57)
								{
									putchar(',');
									putchar(' ');
								}
							}
						}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
