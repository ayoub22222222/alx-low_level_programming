#include "lists.h"
/**
 * add_dnodeint - function add a node at begining of a linked list
 * @head: the head or the begining of the lined list
 * @n: the value of the new node
 * Return: return the adress of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	else
	{
		while ((*head)->prev != NULL)
		{
			*head = (*head)->prev;
		}
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (*head);
}



