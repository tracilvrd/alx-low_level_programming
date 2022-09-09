#include <stdio.h>

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
