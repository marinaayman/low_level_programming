#include "lists.h"

/**
  * pop_listint- deletes the head node of a listint_t linked list.
  * @head: A pointer to the pointer to the head of the listint_t list.
  * Return:  the head node’s data (n)
  *          if the linked list is empty return 0.
  */

int pop_listint(listint_t **head)
{
	listint_t *curr_node = *head;
	int data;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	data = curr_node->n;
	free(curr_node);
	return (data);
}
