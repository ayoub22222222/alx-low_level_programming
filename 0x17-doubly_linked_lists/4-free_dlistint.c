#include "lists.h"
/**
 * free_dlistint - function that free a given node
 * @head: the pointer to a the first node
 * Return: free a given node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t current;

	if (head == NULL)
		return (NULL);
	current = head->next;

	while (current != NULL)
	{
		free(head);
		current = current->next;
	}
	return (head);
}
