#include "lists.h"
/**
 * get_dnodeint_at_index - function return that return the given node
 * @head: pointer the first node
 * @index: index argument
 * Return: return the nth number
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev)
		head = head->prev;
	while (head)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}
	return (NULL);
}
