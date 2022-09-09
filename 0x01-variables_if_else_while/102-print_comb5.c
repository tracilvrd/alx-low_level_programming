#include <stdio.h>

/**
 * main - Program entry point. Possible combinations of double digits printed.
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(void)
{
	int i, ii, j, jj;

	for (i = 48; i <= 57; i++)
	{
		for (ii = 48; ii <= 57; ii++)
		{
			for (j = i; j <= 57; j++)
			{
				for (jj = 48; jj <= 57; jj++)
				{
					if (i == j && jj <= ii)
						continue;
					putchar(i);
					putchar(ii);
					putchar(32);
					putchar(j);
					putchar(jj);
					if (i == 57 && j == 57 && jj == 57 && ii == 56)
						break;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
