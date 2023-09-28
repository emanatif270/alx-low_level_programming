#include "main.h"

/**
 * _sqrt_recursion - find natural squareroot
 * @n: int
 * @val: squre root
 * Return:int
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * squre - find squareroot
 * @n: intto find square root
 * @val: square root
 * Return: int
 */

int squre(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
