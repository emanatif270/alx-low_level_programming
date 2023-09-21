#include "main.h"

/**
 * _strncpy - a function that cpies a string
 *
 * @dest: pointer to destnation
 * @src: pointer to source input buffer
 * @n: bytes of stc
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
