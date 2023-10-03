#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Main entry
 * @ac: int input
 * @av: double pointer array
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
	int v, t, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (v = 0; v < ac; v++)
	{
		for (t = 0; av[v][t]; t++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (v = 0; v < ac; v++)
	{
	for (t = 0; av[v][t]; t++)
	{
		str[r] = av[v][t];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}


