#include "lists.h"

/**
  * add_nodeint - adds a node at the head of a list
  * @head: pointer to head node
  * @n: integer to add to new node
  * description: adds a node at the begining of the list
  * Return: new head node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	temp = *head;
	new_node->n = n;
	new_node->next = temp;
	*head = new_node;
	return (*head);
}
