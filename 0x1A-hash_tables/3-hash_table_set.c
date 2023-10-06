#include "hash_tables.h"

/**
 * hash_table_set -  function add new node hash table 
 *
 *
 * Return: 1 succec else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nn = NULL;
	hash_node_t *cn = NULL;
	unsigned long int k;

	if (ht == NULL || strcmp(key, "") == 0 || key == NULL || value == NULL )
		return (0);
	
	k = key_index((unsigned char *)key, ht->size);
	cn = ht->array[k];

	for (; cn != NULL; cn = cn->next)
	{
		if (strcmp(cn->key, key) == 0)
		{
			if (strcmp(cn->value, value) != 0)
			{
				free(cn->value);
				cn->value = strdup(value);
			}
		return (1);
		}
	}

	nn = _create_node_(key, value);
	if (nn)
		return (0);
	nn->next = ht->array[k];
	ht->array[k] = nn;
	return (1);
}


/**
 * _create_node_ - function that creates a new_node node.
 */
hash_node_t *_create_node_(const char *key, const char *value)
{
	hash_node_t *nn;

	if (key == NULL ||  value == NULL || strcmp(key, "") == 0 )
		return (NULL);

	nn = malloc(sizeof(hash_node_t));

	if (!nn)
		return (NULL);

	nn->key = strdup(key);

	if (!(nn->key))
	{
		free(nn);
		return (NULL);
	}

	nn->value = strdup(value);

	if (!(nn->value))
	{
		free(nn->key);
		free(nn);
		return (NULL);
	}

	nn->next = NULL;
	
	return (nn);
}

