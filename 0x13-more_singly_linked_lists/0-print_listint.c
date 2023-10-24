#include "lists.h"
/**
 * print_listint - Entry pont
 * @h: point to a structures
 * Return:return the number of element
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);

}
