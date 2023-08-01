#include "lists.h"

/**
  * get_nodeint_at_index - gets the node at an index
  * @head: pointer to head
  * @index: index of node to return
  * description: gets the node at the specified index
  * Return: node
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	size_t num_nodes;

	num_nodes = listint_len(head);
	if (index > num_nodes || (int)index < 0)
		return (NULL);
	if (head == NULL)
		return (NULL);
	if (index == 0)
	{
		return (head);
	}
	for (i = 0; i < index - 1; i++)
	{
		head = head->next;
	}
	return ((head->next != NULL) ? (head->next) :  (NULL));
}
/**
  * listint_len - counts number of elements
  * @h: pointer to head node
  * description: counts the number of nodes in a linked list
  * Return: number of elements
*/


size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t num;

	if (h == NULL)
		return (-1);
	temp = h;
	num = 0;
	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
