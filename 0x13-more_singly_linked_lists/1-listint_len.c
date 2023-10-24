#include "lists.h"
/**
 * listint_len - function that take a structure as an argument
 * @h: pointer to a structure
 * Return: return the len of the node
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
	i++;
	}
	return (i);
}
