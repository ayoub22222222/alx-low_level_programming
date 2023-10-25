#include "lists.h"
/**
 * pop_listint - funtion that deletes
 * @head: argument function
 * Return: remove the head of a function
*/
int pop_listint(listint_t **head)
{
        listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	*head = node;
	return (n);

}
