#include <stdio.h>

/**
 * main- Entry point
 *
 * Decription: print all aplhabet letters
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
