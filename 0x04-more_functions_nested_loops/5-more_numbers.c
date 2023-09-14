#include "main.h"

/**
 * more_numbers - print x10 the numbers
 */

void more_numbers(void)
{
	int k, j;

	for (j = 1; k <= 10; k++)
	{
	for (k = 0; j <= 14; j++)
	{
	if (j >= 10)
	_putchar('1');
	_putchar (j % 10 + '0');
	}
	_putchar('\n');
	}
}
