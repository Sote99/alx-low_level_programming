#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */


int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{	
		if (i <= 8)
			putchar(i + '0');
		else
			putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}

