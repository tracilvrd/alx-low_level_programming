#include <stdio.h>

/**
 * main - Program entry point. Prints alphabets in lowercase
 *
 * Return: 0 if successful. Non zero otherwise
 **/

int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar(0xA);
	return (0);
}
