#include "lists.h"
/**
  * free_list - frees a linked list
  * @head: address of the head node
  * description: frees a linked list
  * Return: nothing
*/


void free_list(list_t *head)
{
	list_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev->str);
		free(prev);
	}
}
