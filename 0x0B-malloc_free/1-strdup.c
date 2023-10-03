#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - new memory space location
 * @str: char
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int t, u = 0;

	if (str == NULL)
		return (NULL);
	t = 0;
	while (str[t] != '\0')
		t++;

	aaa = malloc(sizeof(char) * (t + 1));

	if (aaa == NULL)
		return (NULL);

	for (u = 0; str[u]; u++)
		aaa[u] = str[u];

	return (aaa);
}
