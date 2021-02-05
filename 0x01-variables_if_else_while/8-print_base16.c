#include <stdio.h>

/**
* main -Entry Point
* Return: 0 if correct
*/

int main(void)

{
int v = 48;

while (v < 58)
{
putchar (v++);
}

int f = 97;

while (f < 103)
{
putchar (f++);
}

putchar (10);
return (0);
}
