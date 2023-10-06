#include "hash_tables.h"

/**
 * hash_table_get - function return key
 * @ht: pointe
 * @key: pointer key
 *
 * Return: value associated with the element, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tv;
	unsigned long int k = 0;
	

	if ( key == NULL || ht == NULL)
		return (NULL);

	k = key_index((const unsigned char *)key, ht->size);
	tv = ht->array[k];

	for (; tv != NULL; tv = tv->next)
	{
		if (strcmp(tv->key, key) == 0)
			return (tv->value);
	}
	return (NULL);
}

