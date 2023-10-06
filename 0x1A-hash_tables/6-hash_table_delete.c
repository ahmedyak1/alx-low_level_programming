#include "hash_tables.h"

/**
 * hash_table_delete - function that 
 * @ht: pointer to hash table 
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cour = NULL;
	unsigned long int m = 0;

	if (ht == NULL)
		return;

	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			while (ht->array[m])
			{
				cour = ht->array[m];
				free(cour->key);
				free(cour->value);
				ht->array[m] = ht->array[m]->next;
				free(cour);
			}
		}
	}
	free(ht->array);
	free(ht);
}

