#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum
 * @n: the num of items
 * Return: return the sum od all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;
	int sum;

	sum = 0;
	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}

