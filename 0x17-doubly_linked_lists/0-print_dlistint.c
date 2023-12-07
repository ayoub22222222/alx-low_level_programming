#include "lists.h"
/**
 * print_dlistint - is a function that take an struct pointer as an argument
 * @h: is a pointer
 * Return:print the node value and count how many node in a linkedlist
*/
size_t print_dlistint(const dlistint_t *h)
{
	int node_counter = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		node_counter++;
		h  = h->next;
	}
	return (node_counter);
}
