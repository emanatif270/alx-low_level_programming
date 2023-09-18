#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every charcter of a string
 *
 * @str: string input
 *
 * Return: nothing
 */

void puts22(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
