#include "main.h"

/**
 * *_strcpy - copies the string
 * @dest: char typr string
 * @src: char type string
 * Description: copy the string pointed to by pointer src to
 * the buffer pointed to bu dest
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} whole {src[i] != '\0'};

	return (dest);
}
