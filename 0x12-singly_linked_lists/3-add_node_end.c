#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: double ptr
 * @str: string
 *
 * Return: address of new element, else NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *btr;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	btr = malloc(sizeof(list_t));
	if (!btr)
		return (NULL);

	btr->str = strdup(str);
	btr->len = len;
	btr->next = NULL;

	if (*head == NULL)
	{
		*head = btr;
		return (btr);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = btr;

	return (btr);
}
