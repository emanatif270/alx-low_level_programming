#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcides of its own main function
 * @argc:  number of arguments
 * @argv: array of arguments
 *
 * Return: on success, 1 or 2 in cae of failure
 */

int main(int argc, char *argv[])
{
	int index, bytes;
	int (*address)(int, char **) = main;
	unsigned char apcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		apcode = *(unsigned char *)address;
		printf("%.2x", apcode);

		if (index == bytes - 1)
			continue;
			printf(" ");
			address++;
	}
	printf("\n");
	return (0);
}
