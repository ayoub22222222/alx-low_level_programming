#include "hash_tables.h"
/**
 * hash_table_create - function that create a hash table
 * @size: is the size of the array
 * Return: return pointer to the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_table_t *) * size);
	if (hash->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hash->array[i] == NULL;

	return (hash);
}
