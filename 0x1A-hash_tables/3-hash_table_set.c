#include "hash_tables.h"

/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht: index pointer to hash table 
 * @key: index pointer to key 
 * @value: index pointer to the value 
 *
 *
 * Return: retunr 0 failed otherwise 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nn = NULL;
	hash_node_t *cn = NULL;
	unsigned long int k;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
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
	if (nn == NULL)
		return (0);
	nn->next = ht->array[k];
	ht->array[k] = nn;
	return (1);
}


/**
 * _node_ - function new_node node
 * @key: pointer to key.
 * @value: pointe
 *
 * Return: pointer to nn node otherwise NULL
 */
hash_node_t *_create_node_(const char *key, const char *value)
{
	hash_node_t *nn;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (NULL);

	nn = malloc(sizeof(hash_node_t));

	if (nn == NULL)
		return (NULL);

	nn->key = strdup(key);

	if (nn->key == NULL)
	{
		free(nn);
		return (NULL);
	}

	nn->value = strdup(value);

	if (nn->value == NULL)
	{
		free(nn->key);
		free(nn);
		return (NULL);
	}

	nn->next = NULL;
	return (nn);
}

