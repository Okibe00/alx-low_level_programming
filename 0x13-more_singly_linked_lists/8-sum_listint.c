#include "lists.h"

/**
  * sum_listint - sums the data in list
  * @head: head node
  * description: sums the data in a linked list
  * Return: sum or 0
*/

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
