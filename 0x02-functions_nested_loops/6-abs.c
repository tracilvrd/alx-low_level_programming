#include "main.h"

/**
 * _abs - Computes the absolute value of a given number.
 * @n: integer to check
 *
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
