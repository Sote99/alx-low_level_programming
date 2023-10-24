#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: ptr
 *
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t d = 0;

while (h)
{
printf("%d\n", h->n);
d++;
h = h->next;
}

return (d);
}
