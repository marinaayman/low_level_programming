#include "lists.h"
/**
  * free_listint2- frees a listint_t list.
  * @head: A pointer the head of the listint_t list.
  * Return: void.
  */

void free_listint2(listint_t **head)
{
	listint_t *curr_node = *head;

	while (*head)
	{
		*head = (*head)->next;
		free(curr_node);
		curr_node = *head;
	}
	head = NULL;
}
