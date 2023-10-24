#include "lists.h"
/**
 * print_listint - Entry pont
 * @h: point to a structures
 * Return:return the number of element
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d", current->data);
		current = current->next;
	}

}
