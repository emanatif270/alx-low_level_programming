#include <unistd.h>

/**
 * _putchar - write the charcter c 
 * @c: the charcter 
 *
 * Return: on success
 * On error: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
