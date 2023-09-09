#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n;

	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;
	if (s > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, s);
	if (s == 0)
		printf("Last digit of % is %d and is ze
	if (s < 6 && s != 0)
		printf("Last digit of %d  is %d and is less than 6 and not 0\n", n, s);
	return (0);
}
