#include "lists.h"
/**
  * delete_nodeint_at_index - deletes the node at index
  * @head: pointer to head node
  * @index: index
  * description: deletes a node at the provided index
  * Return: 1(success) -1(failed)
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i;

	if (head == NULL || *head ==  NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1 && temp != NULL; i++)
		temp = temp->next;
	if (i == index - 1 && temp != NULL)
	{
		temp1 = temp->next;
		if (temp1 == NULL)
			return (-1);
		temp->next = temp1->next;
		free(temp1);
		return (1);
	}
	else
	{
		return (-1);
	}
}

