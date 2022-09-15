#include "main.h"

/**
 * print_most_numbers - print 0 to 9 except 2 and 4
 *
 * Return: none
 */
void print_most_numbers(void)
{
	char num = '0';

	while (num < ':')
	{
		if (num == '2' || num == '4')
		{
			num++;
			continue;
		}

		_putchar(num);
		num++;
	}

	_putchar('\n');
}
