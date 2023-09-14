#include "main.h"
/**
 * _isdigit - check if numbers are 0 - 9
 * @b: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int b)
{
	if (b >= '0' && b <= '9')
	return (1);
	else
	return (0);
}

