#include "lists.h"


/**
 * print_dlistint - prints the element of a doubly linkd list
 * @h: pointer to head node
 * description: prints the elements in a doubly linke list and return
 * number of nodes
 * Return: Number of nodes
*/



size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node;

	if (h == NULL)
		return (0);

	num_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_node++;
		h = h->next;
	}
	return (num_node);
}
