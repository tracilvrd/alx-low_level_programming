#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @n: number to compute its last digit.
 *
 * Return: the last digit of n.
 */
int print_last_digit(int)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar('0' + last_digit);

	return (last_digit);
}
