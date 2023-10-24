#include "lists.h"
/**
 * add_nodeint - function that take two argument
 * @head: argument of the function
 * @n: the value of the given node
 * Return: the last new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new_node)
	return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (!*head)
	*head = new_node;

	else
	{
	node = *head;
	while (node->next)
	node = node->next;
	node->next = new_node;
	}
	return (new_node);

}
