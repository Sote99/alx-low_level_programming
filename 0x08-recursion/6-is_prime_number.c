#include "main.h"

int actual_prime(int n, int z);

/**
 * is_prime_number - integer is a prime number or not
 * @n: number
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number
 * @z: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int z)
{
	if (z == 1)
		return (1);
	if (n % z == 0 && z > 0)
		return (0);
	return (actual_prime(n, z - 1));
}
