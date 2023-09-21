#include "main.h"

/**
 * _strcat - function that concatenates
 *		two strings
 *
 * @dest : pointer to destnation
 * @src: pointer to source input
 *
 * Return: pointer to the result string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/* iterate through each src array value without the null type */
	for  (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwriting the null bye */
		dest[c++] = src[c2];

	return (dest);
