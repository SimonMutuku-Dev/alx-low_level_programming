#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints base 16 in lowercase
 * Return: 0 if true, others if not
 */

int main(void)
{
int n;
char c;

for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}

putchar('\n');
return (0);
}
