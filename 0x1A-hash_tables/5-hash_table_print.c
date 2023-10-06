#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: pointer hash table 
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *mom;
	unsigned long int k = 0;
	unsigned long int m = 0;

	if (ht == NULL)
		return;
	printf("{");


	for (k = m; k < ht->size; k++)
	{
		
		if (ht->array[k] != NULL)
		{
			mom = ht->array[k];
			while (mom)
			{
				printf("%s'%s': '%s'", m == 0 ? "" : ", ",
					   mom->key, mom->value), m++;
				mom = mom->next;
			}
		}
	}
	printf("}\n");
}

