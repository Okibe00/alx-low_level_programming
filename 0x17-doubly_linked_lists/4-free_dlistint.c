#include "lists.h"
/**
 * free_dlistint - frees a  doubly linked list
 * @head: pointer to head node
 * description: frees a doubly linked list
 * Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
