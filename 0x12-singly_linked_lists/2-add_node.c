#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: double ptr
 * @str: new string
 *
 * Return: address of the new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *btr;
	unsigned int len = 0;

	while (str[len])
		len++;

	btr = malloc(sizeof(list_t));
	if (!btr)
		return (NULL);

	btr->str = strdup(str);
	btr->len = len;
	btr->next = (*head);
	(*head) = btr;

	return (*head);
}
