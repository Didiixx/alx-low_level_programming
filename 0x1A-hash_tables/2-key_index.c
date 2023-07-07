#include "hash_tables.h"



/**
 * key_index - Gives the index of a key
 *
 * @key: pointer to that given key
 *
 * @size: the array size of the hash table
 *
 * Return:  index of the key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	index %= size;
	return (index);
}
