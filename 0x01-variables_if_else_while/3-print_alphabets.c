#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lowercase then uppercase letters
 * Return: 0 if correct, others if not
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}

for (c = 'A'; c <= 'Z'; c++)
{
	putchar(c);
}

putchar('\n');
return (0);
}
