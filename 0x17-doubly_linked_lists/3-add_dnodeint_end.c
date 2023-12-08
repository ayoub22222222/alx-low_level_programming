#include "lists.h"
/**
 * add_dnodeint_end - function that insert a new node at the end of linked list
 * @head: argument
 * @n: the value of the new node
 * Return: return the last node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_one, *current;

	new_node = malloc(sizeof(dlistint_t));

	if (new_one == NULL || head == NULL)
		return (NULL);
	new_one->n = n;
	new_one->next = NULL;

	current = *head;
	if (*head == NULL)
	{
		*head = new_one;
		return (new_one);
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		new_one->prev = current;
		current->next = new_one;
	}
	return (new_one);
}

