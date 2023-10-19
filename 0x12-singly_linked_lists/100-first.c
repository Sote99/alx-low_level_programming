#include <stdio.h>

void third(void) __attribute__ ((constructor));

/**
 * third - prints sentence
 * function executed
 */
void third(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
