#include "lists.h"


/**
  * add_node_end - adds  a  node at the end of  the list
  * @head: address of the head node
  * @str: string to insert
  * description: adds a node to the end of the list
  * Return: pointer to head node
*/



list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node;
	char *str_cpy;

	temp = *head;
	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	str_cpy = strdup(str);
	new_node->next = NULL;
	new_node->str = str_cpy;
	new_node->len = _strlen_recursion(str_cpy);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	temp->next = new_node;
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
