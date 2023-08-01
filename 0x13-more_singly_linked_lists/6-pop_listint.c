#include "lists.h"

/**
  * pop_listint - deletes the head node
  * @head: pointer to the head node
  * description: deletes the head node and returns its data
  * Return: head nodes data
*/



int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
