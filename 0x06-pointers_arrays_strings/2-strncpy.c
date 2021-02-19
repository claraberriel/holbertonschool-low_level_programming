/** Write a function that copies a string.
 * Your function should work exactly like strncpy
 * 
 * gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strncpy.c -o 2-strncpy
 * 
 * Output:
 * 
 * *************************************************************************************************
 * First********************************************************************************************
 * First********************************************************************************************
 * First, solve the problem. Then, write the code
 * First, solve the problem. Then, write the code
 * 0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
 * 0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
 * 0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
 * 0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
 * 0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
 * 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
 * 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
 * 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
 * 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
 * 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
 */

#include "holberton.h"

/**
 * 
 * 
 */

char *_strncpy(char *dest, char *src, int n)