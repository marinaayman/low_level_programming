#include "lists.h"
/**
  * free_listint- frees a listint_t list.
  * @head: A pointer the head of the listint_t list.
  * Return: void.
  */

void free_listint(listint_t *head)
{
	listint_t *curr_node = head;

	while (curr_node != NULL)
	{
		head = head->next;
		free(curr_node);
		curr_node = head;
	}
}
