#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int t, k;

	for (t = 0; t < n; t++)
	{
	for (k = 0; k < n; k++)
	{
	if (k == t)
	_putchar('\\');
	else if (k < t)
	_putchar(' ');
	}
	_putchar('\n');
	}
	}
}
