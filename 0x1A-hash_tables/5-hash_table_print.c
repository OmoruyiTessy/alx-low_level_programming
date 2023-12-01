#include "hash_tables.h"

/**
 * hash_table_print - function to print the key:value from ht
 * @ht: pointer to hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *a;
	int not_fin = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		a = ht->array[i];
		while (a)
		{
			if (not_fin)
				printf(", ");
			printf("'%s': '%s'", a->key, a->value);
			not_fin = 1;
			a = a->next;
		}
	}
	printf("}\n");
}
