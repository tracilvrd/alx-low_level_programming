#include <stdio.h>

/**
 * main - program entry point.
 *
 * @argc: command line argument count.
 * @argv: Array holding the command line arguments as strings.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
