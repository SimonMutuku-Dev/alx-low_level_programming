#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet
 * Return: 0 if true
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
