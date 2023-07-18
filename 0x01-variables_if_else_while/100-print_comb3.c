#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints two-number combinations
 * Return: 0 if true, others if not
 */

int main(void)
{
int t;
int d;

for (t = 0; t <= 9; t++)
{
	for (d = 0; d <= 9; d++)
	{
		if (t == d)
		{
			putchar(t);
			putchar(d);
