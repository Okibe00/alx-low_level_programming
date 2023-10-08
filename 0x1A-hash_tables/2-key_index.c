#include "hash_tables.h"


/**
 * key_index - gets the index of a key
 * @key: key
 * @size: size of hash table
 * description: gets the index of a key
 * Return: index of key or -1 on failure
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0 || key == NULL)
		return (-1);

	return (hash_djb2(key) % size);
}
