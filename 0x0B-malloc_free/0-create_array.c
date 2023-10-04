#include "main.h"
#include <stdlib.h>
#include <stdid.h>
/**
 * create_array - fucntion create an array
 * @size: unsigned size
 * @c: array
 * Return: return sccess
*/
char *create_array(unsigned int size, char c)
{
	char *pchr = malloc(size);

	if (size == 0 || pchr == 0)
		return (0);

	while (size--)
		pchr[size] = c;
	return (pchr);
}
