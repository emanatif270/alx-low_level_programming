#include "main.h"

/**
 * puts - pints a string
 *
 * @str: string to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putcahr(*str + 0);
		str++;
	}
	_putchar('\n');
}
