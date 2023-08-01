#include "lists.h"

/**
  * print_listint - prints elements of a linkd list
  * @h: head node
  * description: prints the elements of a linked list
  * Return: number
*/



size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t num;

	if (h == NULL)
		return (0);
	temp = h;
	num = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		num++;
		temp = temp->next;
	}
	return (num);
}
