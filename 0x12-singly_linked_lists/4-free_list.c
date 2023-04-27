#include "lists.h"
/**
  * free_list- frees a list_t list.
  * @head: A pointer the head of the list_t list.
  * Return: void.
  */

void free_list(list_t *head)
{
	list_t *curr_node = head;

	while (curr_node != NULL)
	{
		head = head->next;
		free(curr_node->str);
		free(curr_node);
		curr_node = head;
	}
}
