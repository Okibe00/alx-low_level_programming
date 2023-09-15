#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node from a double linked list
 * @head: pointer to head node
 * @index: index of node to delete
 * description: deletes a node from a doubly linked list
 * Return: 1(succes) -1(failure)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *d_node, *temp_head;

	count = 0;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0 && (*head)->next == NULL)
	{
		d_node = *head;
		*head = NULL;
		free(d_node);
		return (1);
	}
	if (index == 0)
	{
		free_head(head, &d_node);
		return (1);
	}
	temp_head = *head;
	while (temp_head->next != NULL && count != index)
	{
		temp_head = temp_head->next;
		count++;
	}
	if (count == index)
	{
		d_node = temp_head;
		temp_head->prev->next = temp_head->next;
		temp_head->next->prev = temp_head->prev;
		free(d_node);
		return (1);
	}
	if (temp_head->next == NULL && index == count + 1)
	{
		temp_head->prev->next = NULL;
		free(temp_head);
		return (1);
	}
	return (-1);
}
/**
 * free_head - free head node
 * @head: pointer to head
 * @d_node: address of node to delete
 * description: free head node
 * Return: Nothing
*/
void free_head(dlistint_t **head, dlistint_t **d_node)
{
	*d_node = *head;
	(*head)->next->prev = NULL;
	*head = (*head)->next;
	free(*d_node);
}

