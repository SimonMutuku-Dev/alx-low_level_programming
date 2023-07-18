#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all base 10 single digits
 * Return: 0 if true, others if not
 */

int main(void)
{
int c;

for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}

putchar('\n');
return (0);
}
