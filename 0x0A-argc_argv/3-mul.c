#include <stdio.h>
#include <stdlib.h>

/**
 * main - programme entry point.
 *
 * @argc: command line argument count
 * @argv: array holding command line arguments as strings
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

	printf("Error\n");
	return (1);
}
