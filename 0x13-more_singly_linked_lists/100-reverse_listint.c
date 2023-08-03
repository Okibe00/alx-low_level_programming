#include "lists.h"
/**
  * reverse_listint - reverses a list
  * @head: pointer to head
  * description: reverses a list and updates the head node
  * Return: pointer to head node
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev,  *next;

	prev = NULL;
	next = NULL;
	if (head == NULL || *head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
