#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *first = NULL;
listint_t *last = NULL;

while (*head)
{
last = (*head)->last;
(*head)->last = first;
first = *head;
*head = last;
}

*head = first;

return (*head);
}

