#include "main.h"

/**
 * _isdigit - Checks if input is a digit.
 * @c: value to be checked.
 *
 * Return: 1 if n is a digit. 0 otherwise.
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}
