#include "main.h"

/**
 * _isupper - check if c is a digit
 *
 * @c: input fir alphsbet
 *
 * Return: 1 if its a digit , 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
