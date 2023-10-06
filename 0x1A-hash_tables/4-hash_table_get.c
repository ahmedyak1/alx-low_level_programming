#include "hash_tables.h"

/**
 * hash_table_get - function .
 * @ht: pointer to hash table 
 * @key: pointer to key .
 *
 * Return: retrun element or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int m = 0;
	hash_node_t *tv;

	if (ht == NULL || key == NULL)
		return (NULL);

	m = key_index((const unsigned char *)key, ht->size);
	tv = ht->array[m];

	for (; tv != NULL; tv = tv->next)
	{
		if (strcmp(tv->key, key) == 0)
			return (tv->value);
	}
	return (NULL);
}

