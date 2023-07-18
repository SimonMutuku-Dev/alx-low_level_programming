#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints
 * Return: 0 if true, others if not
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z';)
{
	if (c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
	}
	else
	{
		c++;
	}
}
putchar('\n');
return (0);
}
