#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: pointer to hash table
 * @key: table key
 * @value: value
 * description: adds an element to a hash table
 * Return: 1(success) 0(failure)
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *new_node;

	if (strlen(key) == 0 || key == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	indx = key_index((unsigned char *)key, ht->size);
	new_node = get_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	if (ht->array[indx] == 0)
	{
		ht->array[indx] = new_node;
	}
	else
	{
		if (key_exst(ht->array[indx], key) == 1)
		{
			update_key(ht->array[indx], key, value);
			free(new_node->value);
			free(new_node->key);
			free(new_node);
		}
		else
		{
			new_node->next = ht->array[indx];
			ht->array[indx] = new_node;
		}
	}
	return (1);
}
/**
 * get_node - creates a node
 * @key: key
 * @value: value to store in key
 * description: creates a new _node
 * Return: pointer to new node or  NULL
*/
hash_node_t *get_node(const char *key, const char *value)
{
	char *val_cpy, *key_cpy;
	hash_node_t *new_node;

	if (key == NULL)
		return (NULL);
	if (value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	val_cpy = strdup(value);
	key_cpy = strdup(key);
	if (val_cpy == NULL)
	{
		free(new_node);
		free(key_cpy);
		return (NULL);
	}
	if (key_cpy == NULL)
	{
		free(new_node);
		free(val_cpy);
		return (NULL);
	}
	new_node->key = key_cpy;
	new_node->value = val_cpy;
	new_node->next = NULL;
	return (new_node);
}
/**
 * key_exst - checks if a key already exist
 * @head: pointer to head node
 * @key: key
 * description: checks if the key already exist
 * Return: 1(key exist) 0(does not exist)
*/

int key_exst(hash_node_t *head, const char *key)
{
	if  (head == NULL)
		return (0);
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (1);
		head = head->next;
	}
	return (0);
}
/**
 * update_key - updates the value of a key
 * @head: pointer to head node
 * @value: new key value
 * @key: key
 * description: updates the value stored in a key
 * Return: nothing
*/
void update_key(hash_node_t *head, const char *key, const char *value)
{
	char *val_cpy;

	if (head == NULL)
		return;
	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return;
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = val_cpy;
			return;
		}
		head = head->next;
	}
}
