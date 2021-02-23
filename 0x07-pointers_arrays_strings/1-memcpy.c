#include "holberton.h"

/*
* _memcpy - copy a block of data from a src to a dest address
* @dest: destination address
* @src: source adress
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

 /*
 * Typecast src and dest addresses to (char *)
 */
char *csrc = (char *)src; 
char *cdest = (char *)dest; 
  
/*
* Copy contents of src[] to dest[]
*/
for (int i=0; i<n; i++) 
cdest[i] = csrc[i]; 

}
