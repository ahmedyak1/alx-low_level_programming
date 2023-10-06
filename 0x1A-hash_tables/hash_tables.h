#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>



typedef struct hash_node_s
{
	 char *key;
	 char *value;
	 struct hash_node_s *next;
} hash_node_t;


typedef struct hash_table_s
{
	 unsigned long int size;
	 hash_node_t **array;
} hash_table_t;


typedef struct shash_node_s
{
	 char *key;
	 char *value;
	 struct shash_node_s *next;
	 struct shash_node_s *sprev;
	 struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s
{
	 unsigned long int size;
	 shash_node_t **array;
	 shash_node_t *shead;
	 shash_node_t *stail;
} shash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
hash_node_t *_create_node_(const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
shash_table_t *shash_table_create(unsigned long int size);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
char *shash_table_get(const shash_table_t *ht, const char *key);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
void add_to_sorted_list(shash_table_t *table, shash_node_t *node);
shash_node_t *make_shash_node(const char *key, const char *value);


#endif 

