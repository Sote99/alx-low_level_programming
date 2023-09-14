#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char z;

	for (z = '0'; z <= '9'; z++)
	{
	if (!(z == '2' || z == '4'))
	_putchar(z);
	}
	_putchar('\n');
}
