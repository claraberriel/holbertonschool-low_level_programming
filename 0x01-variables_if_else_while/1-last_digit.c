#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Return: 0 if correct
*/

int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l > 5)
{
printf("Last string of %i is %i and is greater than 5\n", n, l);
}
if (l == 0)
{
printf("Last string of %i is %i and is 0\n", n, l);
}
if (l < 6 && l != 0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l);
}
return (0);
}
