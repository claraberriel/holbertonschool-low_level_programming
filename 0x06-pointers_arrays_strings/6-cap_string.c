/** Write a function that capitalizes all words of a string
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * 
 * gcc -Wall -pedantic -Werror -Wextra 6-main.c 6-cap_string.c -o 6-cap
 * 
 * Output:
 * 
 * Expect The Best. Prepare For The Worst. Capitalize On What Comes.
 * Hello World! Hello-world 0123456hello World Hello World.Hello World
 * Expect The Best. Prepare For The Worst. Capitalize On What Comes.
 * Hello World! Hello-world 0123456hello World Hello World.Hello World
 */

#include "holberton.h"

/**
 * 
 * 
 */

char *cap_string(char *str)
{
int i, prev= str[i] -1;

/*
* iterates the sting
*/
while (str[i]) != '\0') 
{
i++;

/*
* check previous char and ASCII values for lowercase chars
*/
while (prev == ' ' || prev == '\t' || prev == '\0' || prev == ',' | prev == ';' | prev == '.' | prev == '!' | prev == '?' | prev == '"' | prev == '(' | prev == ')' | prev == '{' | prev == '}')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}

}
return (str);
}
