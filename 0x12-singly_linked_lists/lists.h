#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlen_recursion(char *s);
void free_list(list_t *head);
void print(void)__attribute__((constructor));
#endif
