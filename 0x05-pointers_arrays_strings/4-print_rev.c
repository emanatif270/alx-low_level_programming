#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints reverse string
 * @s: prints to the string prints
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
