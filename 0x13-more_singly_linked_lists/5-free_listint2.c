#include "lists.h"

/**
  * free_listint2 - frees a list
  * @head: pointer to head
  * description: frees a list and sets head to NULL
  * Return: nothing
*/


void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
