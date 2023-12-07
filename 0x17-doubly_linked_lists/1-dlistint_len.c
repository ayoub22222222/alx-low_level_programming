#include "lists.h"
/**
 * dlistint_len - a function that calculate the lenght of a linked list
 * @h: is a poiter to a structure
 * Return: the lenght of a lined list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		counter++;
		h = h->next;
	}
	return (counter)
}

