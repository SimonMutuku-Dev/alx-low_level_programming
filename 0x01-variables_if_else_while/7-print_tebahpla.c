#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints lowercases in reverse
 * Return: 0 if true, others if not
 */

int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
{
	putchar(c);
}

putchar('\n');
return (0);
}
