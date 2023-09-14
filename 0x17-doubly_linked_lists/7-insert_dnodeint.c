
#include "lists.h"
/**
 * g*insert_dnodeint_at_index - inserts node an index
 * @h: pointer to head node
 * @idx: position of node
 * @n: value
 * description: inserts a node at a given index
 * Return: pointer to node at index
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node, *temp;

	count = 0;
	temp = *h;
	new_node = get_node(n);
	if (new_node == NULL || h == NULL)
		return (NULL);
	if (temp == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	while (temp->next != NULL && count != idx)
	{
		temp = temp->next;
		count++;
	}
	if (count == 0)
	{
		new_node->next = temp;
		temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	else if (temp->next == NULL && count == idx - 2)
	{
		new_node->prev = temp;
		temp->next = new_node;
		return (new_node);
	}
	else if (count == idx)
	{
		new_node->next = temp;
		new_node->prev = temp->prev;
		temp->prev->next = new_node;
		temp->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
/**
 * get_node - creates a new node
 * @n: value of node
 * description: creates a new node on the heap
 * Return:  pointer to new node
*/

dlistint_t *get_node(int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	return (new_node);
}
