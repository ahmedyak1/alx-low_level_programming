#include "hash_tables.h"
/**
 * hash_table_create - create hash table.
 *
 * return null if fail.
 *
 * @size: size hash table/array.
 * Return: point to the new table create.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tablen = NULL;

	if (size == 0)
		return (NULL);
	tablen = malloc(sizeof(hash_table_t));
	if (tablen == NULL)
		return (NULL);
	tablen->size = size;
	tablen->array = malloc(sizeof(hash_node_t *) * size);
	if (tablen->array == NULL)
		return (NULL);
	return (tablen);
}

