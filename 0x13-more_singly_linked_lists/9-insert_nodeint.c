#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a node at index
  * @head: pointer to head
  * @idx: index to insert
  * @n: integer to be added to new node
  * description: inserts a node an indx
  * Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (i == idx - 1 && temp != NULL)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
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
		return (0);
	temp = h;
	num = 0;
	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
