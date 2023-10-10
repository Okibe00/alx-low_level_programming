#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * description: deletes a hash table
 * Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr_val, *temp;

	if (ht == NULL)
		return;
	i = 0;
	curr_val = NULL;
	temp = NULL;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			curr_val = ht->array[i];
			if (curr_val->next != NULL)
			{
				while (curr_val)
				{
					temp = curr_val;
					free(curr_val->key);
					free(curr_val->value);
					curr_val = curr_val->next;
					free(temp);
				}
				free(curr_val);
			}
			else
			{
				free(curr_val->key);
				free(curr_val->value);
				free(curr_val);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
