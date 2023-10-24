#include "lists.h"

/**
 * pop_listint - deletes
 * @head: pointer
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int bat;

if (!head || !*head)
return (0);

bat = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (bat);
}
