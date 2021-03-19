#include <stdio.h>

/**
 * _main - prints before main
 */

void __attribute__ ((constructor)) _main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
