#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single-digit combinations
 * Return: 0 if true, others if not
 */

int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
	putchar(n);
	if (n != 57)
	{
		putchar(',');
		putchar(' ');
	}
}

putchar('\n');
return (0);
}
