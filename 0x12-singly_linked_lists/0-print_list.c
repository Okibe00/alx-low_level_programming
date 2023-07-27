#include "lists.h"


/**
  * print_list - prints the elements in a linked list
  * @h: pointer to head node
  * description: prints elements in a linked list
  * Return: number of node;
*/


size_t print_list(const list_t *h)
{
	size_t num;
	const list_t *temp;

	temp = h;
	num = 0;
	if (temp == NULL)
	{
		return (num);
	}
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		num++;
		temp = temp->next;
	}
	return (num);
}
