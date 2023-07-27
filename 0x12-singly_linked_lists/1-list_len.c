#include "lists.h"
/**
  * list_len - returns number of elements in a linked list
  * @h: head node
  * descriptions: calculates the number of elem in a linked list
  * Return: number of elements in the linked list
*/


size_t list_len(const list_t *h)
{
	size_t num;
	const list_t *temp;

	temp = h;
	num = 0;
	if (h == NULL)
	{
		return (num);
	}
	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
