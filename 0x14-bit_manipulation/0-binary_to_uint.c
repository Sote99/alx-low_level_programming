#include "main.h"

/**
 * binary_to_uint - converts a binary num
 * @b: string
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int var_bar = 0;

	if (!b)
		return (0);

	for (v = 0; b[v]; v++)
	{
		if (b[v] < '0' || b[v] > '1')
			return (0);
		var_bar = 2 * var_bar + (b[v] - '0');
	}

	return (var_bar);
}
