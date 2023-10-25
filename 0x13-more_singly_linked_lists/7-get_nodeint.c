#include "lists.h"
/**
 * get_nodeint_at_index - function that take two param
 * @head: structure pointer
 * @index: integer parametters
 * Return: the value of a given index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
