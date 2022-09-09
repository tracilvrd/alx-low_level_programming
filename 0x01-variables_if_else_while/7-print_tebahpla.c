#include <stdio.h>

/**
 * main - Program entry point. Prints alphabets in lowercase but reversed
 *
 * Return: 0 if successful. Non zero otherwise
 */
int main(void)
{
	int c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar(0xA);
	return (0);
}
