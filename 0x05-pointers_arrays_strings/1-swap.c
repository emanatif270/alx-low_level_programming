#include "main.h"

/**
 * swap_int - swape the values at two
 *
 * @a: input 1
 * @b: inpur 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
