#include "main.h"

/**
 * flip_bits - counts the num of bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (c = 63; c >= 0; c--)
	{
		current = exclusive >> c;
		if (current & 1)
			count++;
	}

	return (count);
}
