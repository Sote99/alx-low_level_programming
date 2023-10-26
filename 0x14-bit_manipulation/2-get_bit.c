#include "main.h"

/**
 * get_bit - returns the value of a bit in a decimal number
 * @n: search
 * @index: index
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_cad;

	if (index > 63)
		return (-1);

	bit_cad = (n >> index) & 1;

	return (bit_cad);
}

