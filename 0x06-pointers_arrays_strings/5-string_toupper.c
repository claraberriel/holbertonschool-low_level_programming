/*
* Write a function that changes all lowercase to upper
* The value of a in ASCII is 97,
* if we subtract 32 it becomes 65 which is ASCII value of A.
* All lowercase characters ASCII value is from 97 to 122
* and if we subtract 32 in each lowercase character
* only then it will become uppercase character
*/

#include "holberton.h"

/**
 * string_toupper - changes lowercase chars to upper
 * @c: char string
 * Return: c
 */

char *string_toupper(char *c)
{
int i = 0;

/*
* iterate loop until end of string
*/
while (c[i] != '\0')
{

/*
* If char is lowercase then substarct 32
*(because of ASCII value explained above)
*/
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] -= 32;
}

/*
* increase iterator variable
*/
i++;
}

return (c);

}
