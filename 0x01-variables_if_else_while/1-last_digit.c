#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Prints the last digit of a random number
 *
 * Return: 0 if true, others if not
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is %d ", n, n % 10);
if (n % 10 > 5)
{
printf("and is greater than 5\n");
return (0);
}
else if (n % 10 == 0)
{
printf("and is 0\n");
return (0);
}
else if (n % 10 != 0 && n % 10 < 6)
{
printf("and is less than 6 and not 0\n");
return (0);
}
return (0);
}
