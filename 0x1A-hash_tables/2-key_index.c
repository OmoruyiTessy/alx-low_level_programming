#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: key (string) to hash
 * @size: size of hash table
 * Return: index of djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
