#include "lists.h"
/**
 * add_dnodeint - function add a node at begining of a linked list
 * @head: the head or the begining of the lined list
 * @n: the value of the new node
 * Return: return the adress of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_one;

	new_one = malloc(sizeof(dlistint_t));

	if (head == NULL || new_one == NULL)
		return (NULL);

	new_one->n = n;
	new_one->prev = NULL;

	if (*head == NULL)
	{
		head->prev = new_one
		new_one->next = head;
		head = new_one;
	}
	return (&new_one);



