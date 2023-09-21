#include <unistd.h>

/**
 * _putchar:write the charcter c to stdout
 * @c: the chr input
 *  Return: on success 1
 * On error : 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
