#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *cel;

	while (head)
	{
		cel = head->next;
		free(head->str);
		free(head);
		head = cel;
	}
}
