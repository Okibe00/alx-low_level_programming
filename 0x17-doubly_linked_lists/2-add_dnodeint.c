#include "lists.h"

/**
 * add_dnodeint - adds a node at the begining of the list
 * @head: pointer to head node
 * @n: new node data
 * description: adds a new node at the beginning of a list
 * Return: address of the new node
*/


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
