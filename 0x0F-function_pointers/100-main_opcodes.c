#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, b;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (b = 0; b < bytes; b++)
	{
		if (b == bytes - 1)
		{
			printf("%02hhx\n", arr[b]);
			break;
		}
		printf("%02hhx ", arr[b]);
	}
	return (0);
}
