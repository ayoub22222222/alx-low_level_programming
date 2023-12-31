#include "lists.h"
/**
 * free_dlistint - function that free a given node
 * @head: the pointer to a the first node
 * Return: free a given node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	if (head == NULL)
		return;

	current_node = head->next;
	while (current_node != NULL)
	{
		free(head);
		head = current_node;
		current_node = current_node->next;
	}
	free(head);
}
