#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of coins
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0, 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, h, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (h = 0; h < 5 && num >= 0; h++)
	{
		while (num >= coins[h])
		{
			result++;
			num -= coins[h];
		}
	}

	printf("%d\n", result);
	return (0);
}
