#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int a, z;

	for (a = 0; a < size; a++)
	{
	for (z = 0; z < size; z++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
