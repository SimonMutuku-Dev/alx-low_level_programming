#include <stdio.h>

/**
 * main - Find and print largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long int i, n, j;

	i = 3;
	j = 0;
	n = 612852475143;
	
	while (!(n = 1))
	{
		if (n % i == 0)
		{
			n = n / i;
			if (i > j)
			{
				j = i;
			}
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", j);
	return (0);
}