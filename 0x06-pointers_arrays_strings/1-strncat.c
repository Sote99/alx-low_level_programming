#include "main.h"

/**
  * _strncat  - main function
  *
  * @n: Function parameter 1
  *
  * @src: Function parameter 2
  *
  * @dest: Function parammeter 3
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int k, r;

	k = 0;
	r = 0;

	while (dest[k] != '\0')
	{
	k++;
	}
	while (r < n && src[r] != '\0')
	{
	dest[k] = src[r];
	k++;
	r++;
	}
	dest[k] = '\0';
	return (dest);
}
