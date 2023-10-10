#include "hash_tables.h"


/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: hash able
 * @key: key
 * description: retrives the value associated with key
 * Return: value
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *ptr;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	i = 0;
	ptr = NULL;
	while (i < ht->size)
	{
		ptr = ht->array[i];
		if (ptr != 0)
		{
			while (ptr != NULL)
			{
				if (strcmp(ptr->key, key) == 0)
				{
					return (ptr->value);
				}
				ptr = ptr->next;
			}
		}
		i++;
	}
	return (NULL);
}
