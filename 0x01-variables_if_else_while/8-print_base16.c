#include <stdio.h>

/**
* main -Entry Point
* Return: 0 if correct
*/

int main(void)

{
char *hex = "0123456789abcdef";
while (*hex)
putchar(*(hex++));
putchar ('\n');
return (0);
}
