#include <stdio.h>

/**
 * main - prints the num of  arg
 * @argc: num of arg
 * @argv: array of agrument
 * Return: the num
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
