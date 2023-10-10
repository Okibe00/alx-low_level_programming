#include "hash_tables.h"

/**
 * hash_table_print - prints  a has table
 * @ht: hash table
 * description: prints the key value pairs in a hash table
 * Return: Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	char *dic;
	unsigned long int i;
	hash_node_t *curr_val;

	if (ht == NULL)
		return;
	i = 0;
	dic = malloc(sizeof(char) * 2048);
	while (i < ht->size)
	{
		if (i == 0)
		{
			strcat(dic, "{");
		}
		if (ht->array[i])
		{
			curr_val = ht->array[i];
			if (curr_val->next != NULL)
			{
				while (curr_val)
				{
					if (i > 0 && dic[1] != '\0')
						strcat(dic, ", ");
					concat(dic, curr_val);
					curr_val = curr_val->next;
				}
			}
			else
			{
				if (i > 0 && dic[1] != '\0')
					strcat(dic, ", ");
				concat(dic, curr_val);
			}
		}
		i++;
	}
	strcat(dic, "}");
	printf("%s\n", dic);
	free(dic);
}
/**
 * concat - concats string
 * @dic: buffer to store string
 * @curr_val: pointer to node
 * description: concatenates a string
 * Return: NOTHING
*/

void concat(char *dic, hash_node_t *curr_val)
{
	strcat(dic, "'");
	strcat(dic, curr_val->key);
	strcat(dic, "'");
	strcat(dic, ": ");
	strcat(dic, "'");
	strcat(dic, curr_val->value);
	strcat(dic, "'");
}
