#include "hash_tables.h"
/**
 * hash_table_create - function that create a hash table
 * @size: is the size of the array
 * Return: return pointer to the hash table
*/
hash_table_t *hash_table_create(ulint size)
{
	table_t *ht;
	node_t **array;
	ulint i;

	ht = malloc(sizeof(table_t));
	if (!ht)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = NULL;

	ht->size = size;
	ht->array = array;

	return (ht);
}
