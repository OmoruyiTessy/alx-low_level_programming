#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: pointer to hash table
 * @key: key to retrive value
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *a;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	a = ht->array[index];

	while (a)
	{
		if (!strcmp(key, a->key))
			return (a->value);
		a = a->next;
	}
	return (NULL);
}
