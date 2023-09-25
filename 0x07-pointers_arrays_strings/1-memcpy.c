#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: lenght of src to be copied
 *
 * Retun: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
