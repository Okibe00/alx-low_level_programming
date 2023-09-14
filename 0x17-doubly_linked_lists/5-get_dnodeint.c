#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index
 * @head: pointer to head node
 * @index: position of node
 * description:  gets the node at index
 * Return: pointer to node at index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	if (head == NULL)
		return (NULL);

	while (head->next != NULL && count != index)
	{
		head = head->next;
		count++;
	}
	if (count == index)
	{
		return (head);
	}
	return (NULL);
}
