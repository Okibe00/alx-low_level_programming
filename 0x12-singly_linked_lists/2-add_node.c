#include "lists.h"
/**
  * add_node - adds a node at the begining of the list
  * @head: pointer to head node
  * @str: string to add
  * Return: address of new head node
*/


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_cpy;

	str_cpy = strdup(str);
	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = str_cpy;
	new_node->len = _strlen_recursion(str_cpy);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

/**
 * _strlen_recursion - gets the length of a string
 * @s: string
 * description: gets the length of a string using recursion
 * Return: string length
*/


int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (s == NULL)
	{
		return (len);
	}
	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	else
	{
		return (len);
	}
}
