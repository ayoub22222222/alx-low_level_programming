#include "lists.h"
/**
 * free_listint - function that free a listint
 * @head: pointer that allocate structure in the heap
 * Rteunr: free linkedlist
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
