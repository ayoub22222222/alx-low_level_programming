#include "hash_tables.h"
/**
 * key_index - function give as an index to store data
 * @key: pointer to a string
 * @size: size of the array
 * Return: return an index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int sum_of_alpha = 0
	int i = 0;
	int index = 0;

	for (i = 0; i < strlen(key); i++)

	sum_of_alpha += i;

	index = sum_of_alpha % strlen(key);
	return (index);
}
