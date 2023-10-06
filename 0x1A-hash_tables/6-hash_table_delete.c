#include "hash_tables.h"

/**
 * hash_table_delete - function 
 * @ht: pointer to hash table.
 *
 * Return: nothinf
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur = NULL;
	unsigned long int k = 0;

	if (ht == NULL)
		return;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			while (ht->array[k])
			{
				cur = ht->array[k];
				
				free(cur->key);
				
				free(cur->value);
				
				ht->array[k] = ht->array[k]->next;
				
				free(cur);
			}
		}
	}
	free(ht->array);
	free(ht);
}

