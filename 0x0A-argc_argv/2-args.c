#include "main.h"
#include <stdio.h>

/**
 * main - program entry point.
 *
 * @argc: command line argument count.
 * @argc: array holding command line arguments as strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
