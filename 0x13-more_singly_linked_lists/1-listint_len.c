#include "lists.h"
/**
 * listint_len - function that take a structure as an argument
 * @h: pointer to a structure
 * Return: return the len of the node
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
