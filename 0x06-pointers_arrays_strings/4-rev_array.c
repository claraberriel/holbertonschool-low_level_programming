#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: pointer to array
 */

void reverse_array(int *a, int n)
{
int count = 0, end, begin;

/*
* calculate string lenght
*/
while (a[count] != '\0')
{
count++;
}

end = count - 1;

/*
* reverse string
*/
for (begin = 0; begin < count; begin++)
{
n[begin] = a[end];
end--;
}

return (); //not 0 
}
