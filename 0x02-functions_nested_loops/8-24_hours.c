#include "main.h"

void jack_bauer(void)
{
	int h, r, m, n;
	for (h = '0'; h <= '2'; h++)
	{
		for (r = '0'; r <= '3'; r++)
		{
			for (m = '0'; m <= '5'; m++)
			{
				for (n = '0'; n <= '9'; n++)
				{
					_putchar(h);
					_putchar(r);
					_putchar(':');
					_putchar(m);
					_putchar(n);
					_putchar('\n');
				}

			}
		}
	}

}