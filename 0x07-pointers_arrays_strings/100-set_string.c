#include "mian.h"
#include <stdio.h>

/**
 * set_string - gets the value of a pointer
 * @s: pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
