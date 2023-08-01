#include "lists.h"

/**
  * add_nodeint_end - adds a node at the end of a list
  * @head: pointer to head node
  * @n: data to add
  * description: adds a node at the end of the list
  * Return: address of head node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (*head);
}
