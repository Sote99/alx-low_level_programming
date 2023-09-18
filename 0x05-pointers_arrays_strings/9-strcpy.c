#include "main.h"
/**
 * _strcpy - Function
 * @dest: Parameter 1
 * @src: parameter 2
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
