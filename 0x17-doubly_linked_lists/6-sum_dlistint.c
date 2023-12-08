#include "lists.h"
/**
 * sum_dlistint - function that insert a new node at the end of linked list
 * @head: argument
 * Return: return the last node
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head->prev)
	{
		head = head->prev;
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
