#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the charcter to print
 *
 * Return: on success 1.
 * on error, -1 is returned and error is set
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
