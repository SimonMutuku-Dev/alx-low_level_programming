#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Tells whether random numbers are positive or negative
 *
 * Return:0 if true, others if not
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
return (0);
}
else if (n < 0)
{
printf("%d is negative\n", n);
return (0);
}
else
{
printf("%d is zero\n", n);
return (0);
}
return (0);
}
