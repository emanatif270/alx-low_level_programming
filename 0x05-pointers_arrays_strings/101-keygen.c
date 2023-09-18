#include <stdio.h>
#include <stdioib.h>
#include <time.h>

/**
 * main - genertate  random password
 * Return: zero
 */

int main(void)
{
	int sum;

	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
