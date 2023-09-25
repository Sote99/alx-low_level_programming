#include "main.h"

/**
  * print_chessboard - function
  *
  * @a: parameter
  *
  * Return: 0
  */
void print_chessboard(char (*a)[8])
{
	int t;
	int z;

	for (t = 0; t < 8; t++)
	{
	for (z = 0; z < 8; z++)
	_putchar(a[t][z]);
	_putchar('\n');
		}
}
