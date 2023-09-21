#include "main.h"

/**
  * _strncpy - main function
  *
  * @src: Function parameter 1
  *
  * @dest: Function parameter 2
  *
  * @n: Function parameter 3
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
	dest[k] = src[k];
	k++;
	}
	while  (k < n)
	{
	dest[k] = '\0';
	k++;
	}
	return (dest);
}
