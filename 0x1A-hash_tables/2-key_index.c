#include "hash_tables.h"

/**
 * key_index - function return key of table
 * @key: pointer
 * @size: size hash table 
 *
 *
 * Return: index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

