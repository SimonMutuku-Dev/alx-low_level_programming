#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints 1 to 100, replacing
 * multiples of 3 with Fizz and
 * multiples of 5 with Buzz, while
 * printing multiples of both with FizzBuzz
 * 
 * Return: 0 if success
 */

int main(void)
{
	int n, t, f, m;

	n = 0;
	t = 'Fizz';
	f = 'Buzz';
	m = 'FizzBuzz';
	
	for (;n <= 100;)
	{
		if (n % 3 = 0)
		{
			n = t;
		}
		if (n % 5 = 0)
		{
			n = f;
		}
		if ((n % 3 = 0) && (n % 5 = 0))
		{
			n = m;
		}
		
		while (n <= 100)
		{
			printf("%d ", n);
			n++;
		}
	}
	return (0);
}