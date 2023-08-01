#include "lists.h"

/**
  * listint_len - counts number of elements
  * @h: pointer to head node
  * description: counts the number of nodes in a linked list
  * Return: number of elements
*/


size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t num;

	if (h == NULL)
		return (0);
	temp = h;
	num = 0;
	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
