#include <stdio.h>

/**
* main -Entry poin
* Return: 0 if correct
*/

int main(void)
{

char lower = 'a';
char upper = 'A';

while (lower <= 'z')
{
putchar(lower++);
}
while (upper <= 'Z')
{
putchar(upper++);
}
putchar(10);
return (0);
}
