#include <stdio.h>

/**
 * main - Program entry point.
 *
 * @argc: command line argument count
 * @argv: array holding command line arguuments as strings
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
