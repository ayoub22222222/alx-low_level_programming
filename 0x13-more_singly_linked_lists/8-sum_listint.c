#include "lists.h"
/**
 * sum_listint - function that take one argument
 * @head: pointer that alocate a struct into the heap
 * Return: the sum all the ellement inside a node
*/
int sum_listint(listint_t *head)
{
	int results = 0;

	while (head != NULL)
	{
		results += head->n;
		head = head->next;
	}
	return (results);
}
