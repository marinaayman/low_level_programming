#include "lists.h"

/**
  * delete_nodeint_at_index- deletes the node at index
  *                          index of a listint_t linked list.
  * @head: A pointer to the pointer to the head of the listint_t list.
  * @index: the index of the node that should be deleted.
  * Return: 1 if it succeeded, -1 if it failed.
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	int ret = -1;

	for (curr = *head, prev = NULL;
	     curr != NULL && index--;
	     prev = curr, curr = curr->next)
		;
	if (curr == NULL)
		return (ret);
	if (prev == NULL)
	{
		*head = (*head)->next;
		ret = 1;
	}
	else
	{
		prev->next = curr->next;
		ret = 1;
	}
	free(curr);
	return (ret);
}
