#include "hash_tables.h"

/**
 * hash_djb2 - function hash implement djb2 method
 * @str: pointe str
 *
 *
 * Return The new hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int k;
	unsigned long int tableh;
	

	tableh = 5381;
	while ((k = *str++))
	{
		tableh = ((tableh << 5) + tableh) + k;
	}
	return (tableh);
}

