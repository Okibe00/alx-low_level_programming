#include "lists.h"


/**
 * sum_dlistint - sums the elements of a linked list
 * @head: pointer to head node
 * description: sums the elements of a linked list
 * Return: sum of elements or zero
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
