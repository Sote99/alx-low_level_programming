#include "main.h"

/**
  * _memset - Function of the prototype
  *
  * @b: Value used to fill the memory
  *
  * @s: Paramater
  *
  * @n: Parameter
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}
