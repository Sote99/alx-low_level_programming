#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the memory previsouly allocated
 * @old_size: size of allocated memory for ptr
 * @new_size: new size of new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int b;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (b = 0; b < new_size; b++)
			ptr1[b] = old_ptr[b];
	}

	if (new_size > old_size)
	{
		for (b = 0; b < old_size; b++)
			ptr1[b] = old_ptr[b];
	}

	free(ptr);
	return (ptr1);
}





