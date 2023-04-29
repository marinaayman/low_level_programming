#include "lists.h"

/**
  * insert_nodeint_at_index- inserts a new node at a given position.
  * @head: A pointer to the pointer to the head of the listint_t list.
  * @idx: the index of the list where the new node should be added.
  * @n: node data.
  * Return: the address of the new node, or NULL if it failed.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr, *prev;
	unsigned int i;

	for (i = 0, prev = NULL, curr = *head;
	    curr != NULL && i < idx;
	    i++, prev = curr, curr = curr->next)
		;

	if (i != idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = curr;
	if (prev == NULL)
		*head = new;
	else
		prev->next = new;
	return (new);
}
