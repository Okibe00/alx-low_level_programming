#include "lists.h"


/**
 * dlistint_len - returns number of elements in a linked list
 * @h: pointer to head node
 * description: returns the number of elements in a linked list
 * Return: number of nodes
*/


size_t dlistint_len(const dlistint_t *h)
{
	size_t num_node;

	num_node = 0;
	if (h == NULL)
		return (num_node);
	while (h != NULL)
	{
		num_node++;
		h = h->next;
	}
	return (num_node);
}
