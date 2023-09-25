#include "main.h"

/**
  * _strchr - function
  *
  * @s: parameter 1
  *
  * @c: parameter 2
  *
  * Return: 0
  */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}

